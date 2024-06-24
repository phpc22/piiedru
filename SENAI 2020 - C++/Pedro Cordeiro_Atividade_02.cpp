#include<stdio.h>
#include<stdlib.h>

int main()

{
	//endereco das variaveis
	int x;
	float y;
	
	printf("Digite um numero inteiro: ");//o comando "printf" ir� imprimir a linha do programa e mostrar o n�mero a ser digitado na tela
	scanf("%i", &x);//o comando "scanf" salva a informa��o inserida na op��o acima e logo ap�s a v�rgula e vincular� com o endere�o de numero "inteiro X"
	
	printf("Digite um numero decimal: ");//aqui acontecer� a mesma coisa que o bloco acima, por�m, ir� vincula- lo com o numero real "float y"
	scanf("%f", &y);
	
	printf("Inteiro:%i \nDecimal:%.2f",x,y); //aqui ser� impresso e mostrado o resultado dos numeros inseridos acima
	
	system("pause\n");
	
	return 0;
}
