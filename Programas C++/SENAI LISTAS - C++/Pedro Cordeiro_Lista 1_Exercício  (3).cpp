#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
float S, P;
	
	printf("Digite o sal�rio do trabalhador: "); 
	scanf("%f", &S);
	
	printf("Digite o valor da presta��o do empr�stimo: "); 
	scanf("%f", &P);
	
	
	if(P>S*0.20){printf("Empr�stimo n�o concedido \n\n");}
	
	else{printf("Empr�stimo concedido \n\n");}	
	
system("pause");

return 0;
	
}
