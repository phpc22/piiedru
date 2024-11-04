#include <stdio.h>
#include <string.h>

struct dados{
		char nome[30]; 
		int idade;
		char telefone [10];
	};
	
	void receberValor (struct dados agenda, int quantidade);
	void printfValor(struct dados agenda, int quantidade);

int main (){
	
	struct dados agenda;
	int quantidade = 10;
	 receberValor (agenda, quantidade);
	 
	 
	 

return 0;
}
	
	
	void receberValor (struct dados agenda , int quantidade) {
		for (int i = 0; i < quantidade; ++i){
				printf("Digite seu nome: " );
			scanf("%s", agenda.nome);
	
				printf("\nDigite sua idade: " );
			scanf("%d", &agenda.idade);
	
				printf("\nDigite seu telefone: " );
			scanf("%s", agenda.telefone);
	printfValor (agenda, quantidade);
	}	
};	
		
	
	


void printfValor(struct dados agenda, int quantidade){
	int i = 0;
	printf("\n\n\n %i Registro \n - %s \n - %d \n - %s \n\n\n", i + 1, agenda.nome, agenda.idade, agenda.telefone);
	
}

