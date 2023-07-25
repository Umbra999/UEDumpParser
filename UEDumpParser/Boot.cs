using UEDumpParser.CppParsing;
using UEDumpParser.Generator;
using UEDumpParser.Wrappers;

namespace UEDumpParser
{
    internal class Boot
    {
        private static readonly List<string> ClassFiles = new();
        private static readonly List<string> StructFiles = new();

        public static void Main()
        {
            Logger.Log("Generating Offsets");

            string[] FileNames = Directory.GetFiles(FileManager.InputFolder);

            FileManager.Create();

            foreach (string file in FileNames) 
            {
                if (file.EndsWith("struct.h")) StructFiles.Add(file);
                else if (file.EndsWith("classes.h")) ClassFiles.Add(file);
            }

            FileWriter.WriteStartLines(FileManager.EnumOffsetsFile, "EnumOffsets");

            FileWriter.WriteStartLines(FileManager.ClassOffsetsFile, "ClassOffsets");
            foreach (string file in ClassFiles) 
            {
                 File.AppendAllLines(FileManager.ClassOffsetsFile, CppToSharp.ConvertClass(file));
            }
            FileWriter.WriteEndLines(FileManager.ClassOffsetsFile);

            FileWriter.WriteStartLines(FileManager.StructOffsetsFile, "StructOffsets");
            foreach (string file in StructFiles)
            {
                File.AppendAllLines(FileManager.StructOffsetsFile, CppToSharp.ConvertClass(file));
            }
            FileWriter.WriteEndLines(FileManager.StructOffsetsFile);

            FileWriter.WriteEndLines(FileManager.EnumOffsetsFile);

            Logger.Log("Offsets generated");

            // W I P for SDK generation
            //Logger.Log("Generating classes");

            //SDKParser.SplitClass(FileManager.ClassOffsetsFile, FileManager.ClassFolder);
            //SDKParser.SplitClass(FileManager.StructOffsetsFile, FileManager.StructFolder);

            //Logger.Log("Classes generated");

            Logger.Log("Generation finished");

            Console.ReadLine();
        }
    }
}
