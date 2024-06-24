#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float c, l, p, P, t;
	int n;
	
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &c);

    printf("Digite a largura do terreno: ");
    scanf("%f", &l);
    
    printf("Digite o preco do arame por metro: ");
    scanf("%f", &p);
    
    printf("Digite o numero de fios da cerca: ");
    scanf("%i", &n);
    
    printf("Perimetro do terreno: %.2f\n", P=c*2+l*2);
	
	printf("Custo para cercar o terreno: %.2f\n\n", t=P*p*n);
	
	system("pause");
	
	return 0;
	
	
}
