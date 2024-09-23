#include <stdio.h>

int main (void){

	struct horario{ //nome do struct
	
		//nome das variaveis dentro de "agora"
	
		int horas;
		int minutos;
		int segundos;
	} agora = {10, 20, 30}; //definição pode ter o nome aqui!!!
	
//	struct horario agora;
	
//	int x;
//	x = 10;
//		ou
//int x = 10;

	
//	agora.horas = 10;
//	agora.minutos = 20;
//	agora.segundos = 30;
	
	printf("%i : %i : %i \n", agora.horas, agora.minutos, agora.segundos);


return 0;	
}
