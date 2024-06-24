#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
int x;
	
	printf("Digite um número: "); 
	scanf("%i", &x);
	
	if(x%2==0){printf("Número par!! \n\n");}
	
	else{printf("Número Ímpar!!! \n\n");}
	
system("pause");

return 0;
	
}
