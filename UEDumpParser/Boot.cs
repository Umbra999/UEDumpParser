using UEDumpParser.Wrappers;

namespace UEDumpParser
{
    internal class Boot
    {
        private static List<string> ClassFiles = new();
        private static List<string> StructFiles = new();

        public static readonly string ClassOffsetsFile = "Output\\ClassOffsets.cs";
        public static readonly string StructOffsetsFile = "Output\\StructOffsets.cs";
        public static readonly string EnumOffsetsFile = "Output\\EnumOffsets.cs";

        public static void Main()
        {
            string[] FileNames = Directory.GetFiles("Input");

            foreach (string file in FileNames) 
            {
                if (file.EndsWith("struct.h")) StructFiles.Add(file);
                else if (file.EndsWith("classes.h")) ClassFiles.Add(file);
            }

            if (Directory.Exists("Output")) Directory.Delete("Output", true);
            Directory.CreateDirectory("Output");

            WriteStartLines(EnumOffsetsFile, "EnumOffsets");

            WriteStartLines(ClassOffsetsFile, "ClassOffsets");
            foreach (string file in ClassFiles) 
            {
                 File.AppendAllLines(ClassOffsetsFile, CppToSharp.ConvertClass(file));
            }
            WriteEndLines(ClassOffsetsFile);

            WriteStartLines(StructOffsetsFile, "StructOffsets");
            foreach (string file in StructFiles)
            {
                File.AppendAllLines(StructOffsetsFile, CppToSharp.ConvertClass(file));
            }
            WriteEndLines(StructOffsetsFile);

            WriteEndLines(EnumOffsetsFile);

            Logger.Log("Dump successfully parsed");
            Console.ReadLine();
        }

        private static void WriteStartLines(string path, string ClassName)
        {
            List<string> Lines = new()
            {
                "namespace Hexed.SDK.Offsets",
                "{",
                $"    internal class {ClassName}",
                "    {",
            };

            File.AppendAllLines(path, Lines);
        }

        private static void WriteEndLines(string path)
        {
            List<string> Lines = new()
            {
                "    }",
                "}"
            };

            File.AppendAllLines(path, Lines);
        }
    }
}
