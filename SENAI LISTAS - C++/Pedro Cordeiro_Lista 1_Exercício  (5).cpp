#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
int x;
	
	printf("Digite um n�mero: "); 
	scanf("%i", &x);
	
	if(x%2==0){printf("N�mero par!! \n\n");}
	
	else{printf("N�mero �mpar!!! \n\n");}
	
system("pause");

return 0;
	
}
