using System;

namespace SegundoProjeto // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double a;
            int b;
            a = 5.0;
            b = (int) a;
            Console.WriteLine(b);

            //risco de perder informações, por isso casting

        }
    }
}