namespace UEDumpParser
{
    internal class FileManager
    {
        public static readonly string InputFolder = "Input";
        public static readonly string OutputFolder = "Output";

        public static readonly string ClassFolder = $"{OutputFolder}\\Classes";
        public static readonly string EnumFolder = $"{OutputFolder}\\Enums";
        public static readonly string StructFolder = $"{OutputFolder}\\Structs";
        public static readonly string OffsetFolder = $"{OutputFolder}\\Offsets";

        public static readonly string ClassOffsetsFile = $"{OffsetFolder}\\ClassOffsets.cs";
        public static readonly string StructOffsetsFile = $"{OffsetFolder}\\StructOffsets.cs";
        public static readonly string EnumOffsetsFile = $"{OffsetFolder}\\EnumOffsets.cs";


        public static void Create()
        {
            if (Directory.Exists(OutputFolder)) Directory.Delete(OutputFolder, true);

            Directory.CreateDirectory(OutputFolder);
            Directory.CreateDirectory(ClassFolder);
            Directory.CreateDirectory(EnumFolder);
            Directory.CreateDirectory(StructFolder);
            Directory.CreateDirectory(OffsetFolder);
        }
    }
}
