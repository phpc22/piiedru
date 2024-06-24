#include <cstdio>
#include <cstdlib>
#include <locale.h>
 
int main ()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int a, b;

	printf("Digite um número:\n");
	scanf("%i", &a);
	
	printf("Digite outro número:\n");
	scanf("%i", &b);

	if(a>b){printf("O primeiro número digitado é maior que o segundo!!\n\n");}//se a for maior ou igual a b o numero sera positivo

	else{printf("O primeiro número digitado é menor que o segundo!!\n\n");}//caso contrario, ele sera negativo!


system("pause");

return 0;

}

