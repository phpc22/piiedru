#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

int main ()
{
	system("color F0");
	setlocale(LC_ALL, "portuguese");
		
	int alunos,a,b;
	float notas,m,notas1;
	
	printf("Quantos alunos tem na sala de aula?\n\n");
	scanf("%i",&alunos);
	
	while(a<alunos){
	
	
	printf("Digite a nota do aluno %i: ",b);
	b++;
	scanf("%f",&notas);
	
	notas1=notas+notas1;
	
	a++;	
}

	m = notas1/alunos;
	
	printf("Media: %.2f \n\n",m);
	
	system("pause");
	
	return 0;
	
	
}
