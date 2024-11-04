#include<stdio.h>
#include<stdlib.h>

struct lista{
	int info;
	struct lista * next;
};

typedef struct lista Lista;

Lista * inicializaLista(){
	return NULL;
}

Lista * inserir(Lista * pL, int valor){
	Lista * novo;
	novo = (Lista *) malloc(sizeof(Lista));
	if(novo != NULL){
		novo->info = valor;
		novo->next = pL;
		return novo;
	}
}

void imprimir(Lista * pL){
	while(pL != NULL){
		printf("[%d] -> ", pL->info);
		pL = pL->next;
	}
}

Lista * remover(Lista * pL, int valor){
	Lista * ant = NULL;
	Lista * pAux = pL;
	while(pAux != NULL && pAux->info != valor){
		ant = pAux;
		pAux = pAux->next;

	}
	if(pAux == NULL)
		return pL;
	if(ant == NULL)
		pL = pL->next; //pL=pAux->next;
	else
		ant->next = pAux->next;
	free(pAux);
	return pL;
}


int main(){

	Lista * L;
	L = inicializaLista();

	L = inserir(L, 1000);
	L = inserir(L, 100);
	L = inserir(L, 10);

	imprimir(L);

	L = remover(L, 1);
	printf("\n");
	imprimir(L);
	
	return 0;
}
