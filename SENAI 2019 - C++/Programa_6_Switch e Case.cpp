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
	
	printf("Digite um caractere de pontuação:");
	scanf("%c",&a);
	
	switch(a)
	{
		case '.': printf("Ponto\n");break;
		case ',': printf("Vírgula\n");break;
		case ';': printf("Ponto e Vírgula\n");break;
		case ':': printf("Dois Pontos\n");break;
		default : printf("Não é pontuação\n");
	}
	
system("pause");

return 0;
	
}
