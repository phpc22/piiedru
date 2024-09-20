#include <stdio.h>

int main (){
	
	int base, altura, area;
	
	printf("Informe o valor da base: ");
	scanf("%i", &base);
	
	printf("Informe o valor da altura: ");
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("O valor da area eh: %i ", area);
	
	
	return 0; 
}
