#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
float S, P;
	
	printf("Digite o salário do trabalhador: "); 
	scanf("%f", &S);
	
	printf("Digite o valor da prestação do empréstimo: "); 
	scanf("%f", &P);
	
	
	if(P>S*0.20){printf("Empréstimo não concedido \n\n");}
	
	else{printf("Empréstimo concedido \n\n");}	
	
system("pause");

return 0;
	
}
