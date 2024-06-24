#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main ()
{
	system("color e2");
	setlocale(LC_ALL, "portuguese");
	
	float a,b,c;
	
	printf("Digite o lado A:");
	scanf("%f",&a);
	
	printf("Digite o lado B:");
	scanf("%f",&b);
	
	printf("Digite o lado C:");
	scanf("%f",&c);
	
	if(a+b>=c && a+c>=b && b+c>=a);
	
		{
		
			if(a==b && b==c && c==a){printf("Triangulo Equilatero\n\n");}
	
			else
	
			if(a==b || b==c || c==a){printf("Triangulo Isosceles\n\n");}
	
			else
	
			if(a!=b && b!=c && c!=a){printf("Triangulo Escaleno\n\n");}
	
		}
	if((a, b, c)=0){printf("Valores inválidos para formar um Triângulo");}
	
	else
	
	
system("pause");

return 0;
	
}
