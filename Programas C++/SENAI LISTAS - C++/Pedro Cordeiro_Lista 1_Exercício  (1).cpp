#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
int P, S;
	
	printf("Digite um numero: "); 
	scanf("%i", &P);
	
	printf("Digite outro numero: "); 
	scanf("%i", &S);
	
	if(P>S){printf("O primeiro número é maior\n", P>S);}
	
	else{printf("O segundo número é maior\n\n", P<S);}	
	
system("pause");

return 0;
	
}
