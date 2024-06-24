#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()

{
	system("color F");
	setlocale(LC_ALL, "portuguese");

int X, Y, Z, A;

     printf("Digite o primeiro numero inteiro: ");
     scanf("%d", &X);
     
     printf("Digite o segundo  numero inteiro: ");
     scanf("%d",&Y);
     
     printf("Digite o terceiro numero inteiro: ");
     scanf ("%d", &Z);

if( X > Y ){A = Y; Y = X; X = A;}

if( Y > Z ){A = Z; Z = Y; Y = A;}

if( X > Y){A = Y; Y = X; X = A;}


printf("\n%d, %d, %d\n\n",X,Y,Z);

system("Pause");

return(0);

}
