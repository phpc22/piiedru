using System;
using System.Globalization;

namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        static void Main(string[] args) {
           
            
           
            

            Console.WriteLine("Enjoy with your complete name: ");
string name = Console.ReadLine();
            Console.WriteLine("Hello, " + name);

            Console.WriteLine("\n How many bedrooms have on " + name + "`s House?");
 int rooms = int.Parse(Console.ReadLine());

            Console.WriteLine("And how much it`s?");
            double value = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.WriteLine("Wow, R$ " + value.ToString("F2", CultureInfo.InvariantCulture) + " is so expansive!");

            Console.WriteLine("\nOk, now enjoy with your last name, age and height (in same line): ");
string[] vet = Console.ReadLine().Split(' ');
                string lastName = vet[0];
                int age = int.Parse(vet[1]);
                double height = double.Parse(vet[2], CultureInfo.InvariantCulture); 

            Console.WriteLine("\n\nYour data be:");

            Console.WriteLine(name);
            Console.WriteLine(rooms);
            Console.WriteLine(value.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine(lastName);
            Console.WriteLine(age);
            Console.WriteLine(height.ToString("F2", CultureInfo.InvariantCulture));

        }
    }
}
