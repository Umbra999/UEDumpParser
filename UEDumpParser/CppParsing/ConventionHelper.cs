namespace UEDumpParser.CppParsing
{
    internal class ConventionHelper
    {
        public static string GetManagedType(string Type)
        {
            switch (Type)
            {
                case "uint8_t":
                    return "byte";

                case "int8_t":
                    return "sbyte";

                case "uint16_t":
                    return "ushort";

                case "int16_t":
                    return "short";

                case "uint32_t":
                    return "uint";

                case "int32_t":
                    return "int";

                case "uint64_t":
                    return "ulong";

                case "int64_t":
                    return "long";

                case "intptr_t":
                    return "Intptr";

                case "uintptr_t":
                    return "UIntPtr";

                case "size_t": // could also be a UIntPtr/UInt/Int ig
                    return "int";

                case "ptrdiff_t": // could also be a IntPtr/Int ig
                    return "int";
            }

            if (IsManagedType(Type)) return Type;

            return null;
        }

        public static bool IsManagedType(string Type)
        {
            if (Type == "byte") return true;
            if (Type == "sbyte") return true;
            if (Type == "ushort") return true;
            if (Type == "short") return true;
            if (Type == "uint") return true;
            if (Type == "int") return true;
            if (Type == "ulong") return true;
            if (Type == "long") return true;
            if (Type == "IntPtr") return true;
            if (Type == "UIntPtr") return true;
            if (Type == "float") return true;
            if (Type == "double") return true;
            if (Type == "decimal") return true;
            if (Type == "char") return true;
            if (Type == "string") return true;
            if (Type == "bool") return true;
            if (Type == "object") return true;

            if (Type == "struct") return true;

            return false;
        }

    }
}
