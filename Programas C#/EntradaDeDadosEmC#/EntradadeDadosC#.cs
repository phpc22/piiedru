using System;
using System.Globalization;
//----------------------------------------------------PARTE 1------------------------------------------ 
/*      string frase = Console.ReadLine();
      string x = Console.ReadLine();
      string y = Console.ReadLine();
      string z = Console.ReadLine();

      string s = Console.ReadLine();
       string[] vet = s.Split(' ');
          string p1 = vet[0];
          string p2 = vet[1];
          string p3 = vet[2];

      Console.WriteLine("\n You Typed: ");
          Console.WriteLine(frase);
              Console.WriteLine(x);
                 Console.WriteLine(y);
                   Console.WriteLine(z);
                       Console.WriteLine(p1);
                       Console.WriteLine(p2);
                       Console.WriteLine(p3); */
//-------------------------------------------------------------PARTE 2--------------------------

int n = int.Parse(Console.ReadLine());
char sexo1 = char.Parse(Console.ReadLine());
double n2 = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
string[] vet = Console.ReadLine().Split(' ');
string nome = vet[0];
char sexo2 = char.Parse(vet[1]);
int idade = int.Parse(vet[2]);
double altura = double.Parse(vet[3], CultureInfo.InvariantCulture);



Console.WriteLine("You Typed: " + n);
Console.WriteLine(sexo1);
Console.WriteLine(n2);
Console.WriteLine(nome);
Console.WriteLine(sexo2);
Console.WriteLine(idade);
Console.WriteLine(altura.ToString("F2", CultureInfo.InvariantCulture));
