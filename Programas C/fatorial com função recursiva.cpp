#include <stdio.h>

int main (void){
	
	int fatorial(int x);
	int numero, resultado;
	
	printf("Digite um numero inteiro: \n");
	scanf("%i", &numero);
	
		resultado = fatorial (numero);
	
	printf("O fatorial de %i eh: %i", numero, resultado);
		
		
	return 0;
}

int fatorial (int x){
	
	int resultado;
	
	 if(x == 0){
	 resultado = 1;
	}else{
										//nunca se da o valor da função até ter ele exatamente
		resultado = x * fatorial(x - 1); // cria-se outras funções com o mesmo nome na memoria prosseguindo com o numero inserido (subitraindo 1) até que ache o primeiro valor (0), e vá substituindo os demais 
	//exemplo 3 * 2 = 6
	//		  2 * 1
	//		  1 * 1
	//		  0 -> volta 1 pelo if
	}
	return resultado;
}

