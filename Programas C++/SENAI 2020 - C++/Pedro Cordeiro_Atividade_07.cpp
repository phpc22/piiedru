#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
	char a;
	
	printf("Digite um Numero de 1 a 7: ");
	scanf("%c",&a);
	
	switch(a)
	{
		case '1': printf("Domingo\n\n");break;
		case '2': printf("Segunda-Feira\n\n");break;
		case '3': printf("Terca-Feira\n\n");break;
		case '4': printf("Quarta-Feira\n\n");break;
		case '5': printf("Quinta-Feira\n\n");break;
		case '6': printf("Sexta-Feira\n\n");break;
		case '7': printf("Sabado\n\n");break;
		default : printf("Nao eh valido como dia da semana!!!\n");
	}
	
system("pause");

return 0;
	
}
