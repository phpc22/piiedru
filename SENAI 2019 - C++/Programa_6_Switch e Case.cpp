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
	
	printf("Digite um caractere de pontua��o:");
	scanf("%c",&a);
	
	switch(a)
	{
		case '.': printf("Ponto\n");break;
		case ',': printf("V�rgula\n");break;
		case ';': printf("Ponto e V�rgula\n");break;
		case ':': printf("Dois Pontos\n");break;
		default : printf("N�o � pontua��o\n");
	}
	
system("pause");

return 0;
	
}
