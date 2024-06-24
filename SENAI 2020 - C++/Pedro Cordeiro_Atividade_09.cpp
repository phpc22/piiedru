#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main ()
{
	system("color F0");
	setlocale(LC_ALL, "portuguese");
	
	char a;
	
	printf("Digite um Numero de 1 a 12: ");
	scanf("%c",&a);
	
	switch(a)
	{
		case '1': printf("Janeiro\n\n");break;
		case '2': printf("Fevereiro\n\n");break;
		case '3': printf("Marco\n\n");break;
		case '4': printf("Abril\n\n");break;
		case '5': printf("Maio\n\n");break;
		case '6': printf("Junho\n\n");break;
		case '7': printf("Julho\n\n");break;
		case '8': printf("Agosto\n\n");break;
		case '9': printf("Setembro\n\n");break;
		case '10': printf("Outubro\n\n");break;
		case '11': printf("Novembro\n\n");break;
		case '12': printf("Dezembro\n\n");break;
		default : printf("Nao eh valido como mes de um ano!!!\n");
	
	}
	
system("pause");

return 0;
	
}

