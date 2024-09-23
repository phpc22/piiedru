#include <stdio.h>

	struct horario{
		int horas;
		int minutos;
		int segundos;
	};
	
int main (){
	void receberHorarios(struct horario list[5]);
	void printHorarios(struct horario list[5]);
	struct horario lista[5];
	
	receberHorarios(lista);
	printHorarios(lista);
	
	
	
	return 0;
}



	void receberHorarios(struct horario list[5]){
		int i;
		for(int i = 0; i < 5; ++i){
			printf(" Digite o %i horario (hh:mm:ss): ", i + 1);
			scanf("%i:%i:%i", &list[i].horas, &list[i].minutos, &list[i].segundos);
		}
	}
	
	
	void printHorarios(struct horario list[5]){
		
		for(int i = 0; i < 5; ++i){
			
			printf("o %i horario eh: %i:%i:%i\n ", i + 1, list[i].horas, list[i].minutos, list[i].segundos);
		}
	}
	
	
	
