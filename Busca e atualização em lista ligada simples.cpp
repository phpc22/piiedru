#include <stdio.h>
#include <stdlib.h>

struct lista {
    int info;
    struct lista *next;
};

typedef struct lista Lista;

Lista *inicializaLista() {
    return NULL;
}

Lista *inserir(Lista *pL, int valor) {
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo != NULL) {
        novo->info = valor;
        novo->next = pL;
        return novo;
    }
    return pL;
}

void imprimir(Lista *pL) {
    while (pL != NULL) {
        printf("[%d] -> ", pL->info);
        pL = pL->next;
    }
    printf("NULL\n");
}

Lista *remover(Lista *pL, int valor) {
    Lista *ant = NULL;
    Lista *pAux = pL;

    while (pAux != NULL && pAux->info != valor) {
        ant = pAux;
        pAux = pAux->next;
    }

    if (pAux == NULL)
        return pL;

    if (ant == NULL)
        pL = pL->next;
    else
        ant->next = pAux->next;

    free(pAux);
    return pL;
}

//*estudar mais como funciona e a lógica de programação desse exercicio*

//verifica se um dado existe na lista
int existeNaLista(Lista *pL, int valor) {
    while (pL != NULL) {
        if (pL->info == valor)
            return 1; //verdadeiro
        pL = pL->next;
    }
    return 0; //false
}

// altera o valor do elemento na lista
int alterarValor(Lista *pL, int valorAntigo, int valorNovo) {
    while (pL != NULL) {
        if (pL->info == valorAntigo) {
            pL->info = valorNovo;
            return 1; //true
        }
        pL = pL->next;
    }
    return 0; // false
}

int main() {
    Lista *L = inicializaLista();

  
    L = inserir(L, 1000);
    L = inserir(L, 100);
    L = inserir(L, 10);

    printf("Lista original: ");
    imprimir(L);

    
    int valor = 100;
    if (existeNaLista(L, valor))
        printf("O valor %d existe na lista.\n", valor);
    else
        printf("O valor %d não existe na lista.\n", valor);

    
    int valorAntigo = 100;
    int valorNovo = 200;
    if (alterarValor(L, valorAntigo, valorNovo))
        printf("O valor %d foi alterado para %d.\n", valorAntigo, valorNovo);
    else
        printf("O valor %d não foi encontrado na lista para alteração.\n", valorAntigo);

    printf("Lista após alteração: ");
    imprimir(L);

    return 0;
}

