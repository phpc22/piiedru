#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main ()
{
	system("color F0");
	setlocale(LC_ALL, "portuguese");
	 
	int Op;
	float a, b, som, dif, prod, div;
	
	printf("Digite um numero:");
	scanf("%f",&a);
	
	printf("Digite outro numero:");
	scanf("%f",&b);
	
	printf("1- Soma de 2 numeros || 2- Diferenva entre 2 numeros || 3- Produto entre 2 numeros || 4- Divisao entre 2 numeros \n",Op);
	scanf("%i",&Op);
	
	switch(Op)
	{
		case 1: som=a+b;
			printf("A Soma dos dois numeros eh: %.2f \n" ,som);
			break;
			
		case 2: if(a>b)
			dif=a-b;
			else if(b>a)
			dif=b-a;
			else
			dif=0;
			printf("A Diferenca dos dois numeros eh: %.2f \n" ,dif);
			break;
			
		case 3: prod=a*b;
			printf("O Produto dos dois numeros eh: %.2f \n" ,prod);
			break;
			
		case 4: if (b==0)
			printf("NAO EXISTE DIVISAO POR ZERO!\n");
			else
			div=a/b;
			printf("A divisao de dois numeros eh: %.2f \n" ,div);
			break;
			
		default : printf("Opcao invalida\n");
	}
	
system("pause");

return 0;
	
}

