#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int P;
	
	printf("Digite um numero: "); 
	scanf("%i", &P);
	
	printf("Antecessor: %i\n", P-1);
	
	printf("Sucessor: %i\n\n", P+1);
	
	system("pause");
	
	
	return 0;
	
 } 
