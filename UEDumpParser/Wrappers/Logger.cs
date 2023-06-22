namespace UEDumpParser.Wrappers
{
    internal class Logger
    {
        public static void Log(object obj)
        {
            if (obj == null) obj = "NULL";

            string log = obj.ToString().Replace("\a", "a").Replace("\u001B[", "u001B[");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"[{DateTime.Now.ToShortTimeString()}] [");
            Console.ForegroundColor = ConsoleColor.DarkBlue;
            Console.Write("UEParser");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"] {log}\n");
        }

        public static void LogError(object obj)
        {
            if (obj == null) obj = "NULL";

            string log = obj.ToString().Replace("\a", "");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"[{DateTime.Now.ToShortTimeString()}] [");
            Console.ForegroundColor = ConsoleColor.DarkBlue;
            Console.Write("UEParser");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"] ");
            Console.ForegroundColor = ConsoleColor.Red;
            Console.Write($"{log}\n");
        }

        public static void LogWarning(object obj)
        {
            if (obj == null) obj = "NULL";

            string log = obj.ToString().Replace("\a", "");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"[{DateTime.Now.ToShortTimeString()}] [");
            Console.ForegroundColor = ConsoleColor.DarkBlue;
            Console.Write("UEParser");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"] ");
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.Write($"{log}\n");
        }

        public static void LogDebug(object obj)
        {
            if (obj == null) obj = "NULL";

            string log = obj.ToString().Replace("\a", "");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"[{DateTime.Now.ToShortTimeString()}] [");
            Console.ForegroundColor = ConsoleColor.DarkBlue;
            Console.Write("UEParser");
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.Write($"] ");
            Console.ForegroundColor = ConsoleColor.DarkGray;
            Console.Write($"{log}\n");
        }
    }
}
