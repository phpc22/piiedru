#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main ()
{

int x, maior, menor; 

printf("Digite um numero inteiro: "); 
scanf("%d", &x); 
maior = menor = x; 

while(x > 0) 
{ 

if(x > maior) 
maior = x; 
if (x < menor) 
menor = x; 

printf("Digite um numero inteiro: "); 
scanf("%d", &x); 
} 

printf("O maior numero digitado foi: %d \n", maior); 
printf("O menor numero digitado foi: %d \n\n", menor); 
printf("Fim do programa. \n\n");
	
system("pause");
	
return 0;
	
	
}
