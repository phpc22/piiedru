#include <stdio.h>

int main(void) {
	
	const int bimestre = 4;
	const int alunos = 4;	
	float notas [alunos] [bimestre] = {0};
	float media [alunos] = {0};
	float mediares = 0;


	
	printf("digite as notas do aluno 1:\n");
	
	for(int m = 0; m < 4; ++m){
		for(int n; n < 4; ++n){
			scanf("%.2f", &notas[m] [n]);
			mediares += notas[m] [n];
		}
		
		media[alunos] = mediares / bimestre;
		mediares = 0;
		printf("digite as notas do aluno %i:\n", m + 2);
	}
	
	return 0;
}

