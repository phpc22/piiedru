#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
float P;
	
	printf("Digite um numero: "); 
	scanf("%f", &P);
	
	
	if(P>0){printf("A raíz quadrada desse número é: %.2f\n\n", P=sqrt(P));}
	
	else{printf("Esse número elevado ao quadrado é: %.2f\n\n", P=P*P);}	
	
system("pause");

return 0;
	
}
