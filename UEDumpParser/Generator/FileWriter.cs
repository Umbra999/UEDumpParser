namespace UEDumpParser.Generator
{
    internal class FileWriter
    {
        public static void WriteStartLines(string path, string ClassName)
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

        public static void WriteEndLines(string path)
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
