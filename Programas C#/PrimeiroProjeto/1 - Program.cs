using System;

namespace PrimeiroProjeto // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args)
        {

            double x = 10.35784;
            string nome = "Pedro";
            int idade = 22;
           // char sexo = "Masculino";


            Console.WriteLine(x);
            Console.WriteLine(x.ToString("F2"));
            Console.WriteLine(x.ToString("F4"));

            Console.WriteLine("Hello World!");
            Console.WriteLine("Good morning!");
            Console.WriteLine("O " + nome + " tem " + idade + " anos de idade e é do sexo"/* + sexo*/);

        }
    }
}
 