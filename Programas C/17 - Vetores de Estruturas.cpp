#include <stdio.h>

int main (){
	
	struct horario{
		int horas;
		int minutos;
		int segundos;
	};
	
/*	struct horario teste [5];
	 teste[0].horas = 10;
	 teste[0].minutos = 20;
	 teste[0].segundos = 30;
	 
	 printf("%i:%i:%i \n", teste[0].horas, teste[0].minutos, teste[0].segundos);
*/
	
	struct horario teste [5] = 
	{	{10, 20, 30}, {510, 50, 30}, {40, 500, 60},
				{70, 80, 90}, {100, 200, 300}	};
				
	for(int i = 0; i < 5; ++i){
		printf("%i:%i:%i \n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}
				
	
	return 0;
}
