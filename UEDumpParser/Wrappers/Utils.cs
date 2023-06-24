using System.Globalization;
using System.Text.RegularExpressions;

namespace UEDumpParser.Wrappers
{
    internal class Utils
    {
        public static bool IsUshort(string hexValue)
        {
            if (hexValue.StartsWith("0x")) hexValue = hexValue.Substring(2);

            return ushort.TryParse(hexValue, NumberStyles.HexNumber, null, out _);
        }

        public static bool IsByte(string hexValue)
        {
            if (hexValue.StartsWith("0x")) hexValue = hexValue.Substring(2);

            return byte.TryParse(hexValue, NumberStyles.HexNumber, null, out _);
        }

        public static string SanitizeString(string input)
        {
            return input.Replace("[", "").Replace("]", "");
        }

        public static bool IsStringValid(string input)
        {
            if (!Regex.IsMatch(input, @"^[a-zA-Z]")) return false;

            if (Regex.IsMatch(input, @"[^a-zA-Z0-9_\s-]")) return false;

            return true;
        }

        public static string GetComments(string[] splitted)
        {
            return string.Join(" ", splitted.Skip(3).Take(splitted.Length - 4)).Trim('(', ')');
        }
    }
}
