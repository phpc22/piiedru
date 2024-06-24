#include <cstdio>
#include <cstdlib>
#include <locale.h>
 
int main ()
{
	
	setlocale(LC_ALL, "portuguese");
	
	float nr;

	printf("Digite um numero:\n");
	scanf("%f", &nr);

	if(nr>0){printf("O numero digitado é positivo\n\n");}//se nr for maior ou igual a 0 o numero sera positivo

	else{printf("O numero digitado é negativo\n\n");}//caso contrario, ele sera negativo!


system("pause");

return 0;

}
