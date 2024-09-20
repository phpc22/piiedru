# include <stdio.h>

int main (void){
	int vetor [10] = {6, 4, 9, 1, 8, 5, 0, 3, 2, 7};
	int i; 
	void ordemCrescente (int vetor [], int n); //n informa a quantidade de membros (quantas vezes é preciso rodar).
	
	ordemCrescente (vetor, 10);
	for (i = 0; i < 10; ++i){ //i lê a posição do nuúmero
		
	printf ("%i", vetor [i]); 
	
	}
	
	
	
	return 0;
}

	void ordemCrescente (int vetor [], int n){
		int i, j, temp;		//dentro da função o j é sempre o valor a frente de i(uma posição a sua frente)
		
		for (i = 0; i < n; ++i){
			for(j = i + 1;  j < n; ++j){ //j = i ++1 (sempre a frente)
				
				if(vetor[i] > vetor[j]){
					temp = vetor[i]; 		//não é possível trocar a água de um copo para o outro
					vetor[i] = vetor[j];	//se não tiver um copo extra.
					vetor[j] = temp;
				}
			}
		}
	}
	
