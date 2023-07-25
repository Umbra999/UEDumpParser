using System.Text.RegularExpressions;

namespace UEDumpParser.Generator
{
    internal class SDKParser
    {
        public static void SplitClass(string Input, string Output)
        {
            string inputContent = File.ReadAllText(Input);

            Regex regex = new(@"public\s+static\s+class\s+([^\s]+)\s*\{([^}]*)\}");

            MatchCollection matches = regex.Matches(inputContent);

            foreach (Match match in matches)
            {
                string className = match.Groups[1].Value;
                string classContent = match.Groups[2].Value;

                string outputFilePath = $"{className}.cs";

                string outputFileFullPath = Path.Combine(Output, outputFilePath);

                FileWriter.WriteStartLines(outputFileFullPath, className);
                File.AppendAllText(outputFileFullPath, $"{classContent}\n");
                FileWriter.WriteEndLines(outputFileFullPath);
            }
        }

        public static void GenerateSDK()
        {
            // WIP
        }
    }
}
