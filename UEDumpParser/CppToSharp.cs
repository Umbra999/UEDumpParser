using UEDumpParser.Wrappers;

namespace UEDumpParser
{
    internal class CppToSharp
    {
        public static string[] ConvertClass(string path)
        {
            string[] Lines = File.ReadAllLines(path);

            bool WritingEnum = false;

            List<string> Converted = new();
            foreach (string Line in Lines) 
            {
                if (Line == "};")
                {
                    if (WritingEnum)
                    {
                        ConvertEnum(Line);
                        ConvertEnum("");
                        WritingEnum = false;
                    }
                    else
                    {
                        Converted.Add("        " + Line);
                        Converted.Add("");
                    }
                }

                else if (WritingEnum || Line.StartsWith("// Enum") || Line.StartsWith("enum class"))
                {
                    WritingEnum = true;
                    ConvertEnum(Line);
                    continue;
                }

                else if (Line.StartsWith("// ")) Converted.Add("        " + Line);

                else if (Line.StartsWith("struct "))
                {
                    string[] splitted = Line.Split(" ");

                    string inhertedComment = $"// Inherited: {(splitted.Length > 3 ? splitted[3] : "NULL")}";
                    Converted.Add("        " + inhertedComment);

                    string classInit = $"public static class {splitted[1]}";
                    Converted.Add("        " + classInit);

                    string classOpenBracket = "{";
                    Converted.Add("        " + classOpenBracket);
                }

                else if (Line.Contains("// 0x"))
                {
                    string[] splitted = Line.Split(" ");

                    string Type = ConventionHelper.GetManagedType(splitted[0].Trim());
                    if (Type == null)
                    {
                        Logger.LogWarning($"Unsupported type: {splitted[0].Trim()}");
                        continue;
                    }

                    string propName = splitted[1].Trim();
                    int propIndex = Line.IndexOf(propName);
                    string propLine = Line.Substring(propIndex).Replace(";", "");
                    string[] split = propLine.Split(" ");

                    string Name = Utils.SanitizeString(split[split.Length - 3]);

                    if (!Utils.IsStringValid(Name)) continue;

                    string Offset = split[split.Length - 1].Split("(")[0];
                    string OffsetType = Utils.IsByte(Offset) ? "byte" : Utils.IsUshort(Offset) ? "ushort" : "uint";
                    string StructType = split[0];

                    string prop = $"public const {OffsetType} {Name} = {Offset}; // {Type} ({StructType})";
                    Converted.Add("            " + prop);
                }
            }

            return Converted.ToArray();
        }

        public static void ConvertEnum(string Line)
        {
            List<string> Converted = new();

            if (Line.StartsWith("// ") || Line == "};") Converted.Add("        " + Line);

            else if (Line.StartsWith("enum class"))
            {
                string[] splitted = Line.Split(" ");

                if (splitted.Length != 6) return;

                string Type = ConventionHelper.GetManagedType(splitted[4].Trim());
                string classInit = $"public enum {splitted[2]} : {Type}";
                Converted.Add("        " + classInit);

                string classOpenBracket = "{";
                Converted.Add("        " + classOpenBracket);
            }

            else if (Line == "") Converted.Add(Line);

            else Converted.Add("           " + Line);

            File.AppendAllLines(Boot.EnumOffsetsFile, Converted);
        }
    }
}
