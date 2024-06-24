#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color 2");
	setlocale(LC_ALL, "portuguese");
	
int T, A, E, M;
	
	printf("Digite a nota do trabalho em laboratório: "); 
	scanf("%i", &T);
	
	printf("Digite a nota da avaliação semestral: "); 
	scanf("%i", &A);
	
	printf("Digite a nota do exame final: "); 
	scanf("%i", &E);
	
	M=((T*2)+(A*3)+(E*5)/10);
		
	if(M<3){printf("Aluno Reprovado!! \n\n");}
	
	else
	
	if((M>=3) || (M<=4,9)){printf("Aluno em Recuperação!! \n\n");}
	
	else
	
	if(M=5 || M>5){printf("Aluno Aprovado!! \n\n");}
	
	else
	
system("pause");

return 0;
	
}
