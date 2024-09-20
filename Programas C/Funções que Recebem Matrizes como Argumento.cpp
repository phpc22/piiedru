#include <stdio.h>

int main (void){
	
	void funcaoPrint(int x [] [3]);
	int matriz [3] [3] {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	funcaoPrint (matriz); //apenas informar o nome quando chamar a função
	
	return 0;
}



void funcaoPrint(int x [] [3]){ //no minimo informar a quantidade de coluna
	
	int i, j;
	
	for(i = 0; i < 3; ++i){
		for(j = 0; j < 3; ++j){
			printf("%i ", x[i] [j]);
		}
		printf("\n");
	}
	
	
	
}

