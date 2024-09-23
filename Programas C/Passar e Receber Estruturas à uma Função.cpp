#include <stdio.h>


	struct horario{ //nome do struct
	
		//nome das variaveis dentro de "agora"
	
		int horas;
		int minutos;
		int segundos;
		double teste;
		char letra;
	}; //

int main (void){
	
	struct horario teste (struct horario x);
	

	
	struct horario agora; //nome da veriavel dentro do struct
	
	agora.horas = 8;
	agora.minutos = 19;
	agora.segundos = 43;
	
	struct horario proxima;
	proxima = teste(agora);
	
	printf("%i:%i:%i \n ",	proxima.horas, 
							proxima.minutos, 
							proxima.segundos);
	
	
	
	
return 0;
}

struct horario teste (struct horario x){
	
	printf("%i:%i:%i \n",	x.horas, 
							x.minutos, 
							x.segundos);
	
	x.horas = 100;
	x.minutos = 100;
	x.segundos = 100;
	
	return x;
}

