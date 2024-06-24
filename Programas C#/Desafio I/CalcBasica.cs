 Console.WriteLine("calculadora Basica");

        Console.WriteLine("digite qual o tipo de operação dentre essas você deseja operar: \n\n    soma. \n    subt. \n    mult. \n    divi.");
        float soma, subt, mult, divi;
        string operacao = Console.ReadLine();


        Console.WriteLine("Digite o primeiro numero:");
        float x = float.Parse(Console.ReadLine());

        Console.WriteLine("Digite o segundo numero:");
        float y = float.Parse(Console.ReadLine());

        switch (operacao)
        {

            case "divi":
                divi = x / y;
                Console.WriteLine("o resultado da sua divisao eh: " + divi);
                break;

                case "mult":
                mult = x * y;
                Console.WriteLine("o resultado da sua multiplicacao eh: " + mult);
                break;

                case "subt":
                subt = x - y;
                Console.WriteLine("o resultado da sua subitracao eh: " + subt);
                break;

                case "soma":
                soma = x + y;
                Console.WriteLine("o resultado da sua soma eh: " + soma);
                break;

        }


        
if (divi){

res = x / y ;
System.Console.WriteLine("o resultado da operação é " + res);

}else if (mult){

res = x * y;
System.Console.WriteLine("o resultado da operação é " + res);

}else if (subt){

res = x - y;
System.Console.WriteLine("o resultado da operação é " + res);

}else if (soma){

res = x + y;
System.Console.WriteLine("o resultado da operação é " + res);

}else{

System.Console.WriteLine("ocorreu um erro!");
}