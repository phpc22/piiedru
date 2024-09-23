#include <stdio.h>

int main (void){

	struct horario{ //nome do struct
	
		//nome das variaveis dentro de "agora"
	
		int horas;
		int minutos;
		int segundos;
		double teste;
		char letra
	};
	
	struct horario agora; //nome da veriavel dentro do struct
	
	agora.horas = 07;
	agora.minutos = 52;
	agora.segundos = 30;
	
	struct horario depois;
	
	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.teste = 50.55 / 123;
	depois.letra = 'a';
	
	
	printf("%i:%i:%f:%c", depois.horas, depois.minutos, depois.teste, depois.letra);
	 
	
return 0;
}
