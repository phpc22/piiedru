#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	system("color F");
	setlocale(LC_ALL, "portuguese");
	
	float a,p;
	
	
	printf("Digite sua altura:");
	scanf("%f",&a);
	
	printf("Digite seu peso:");
	scanf("%f",&p);
	
	if(a<=1.20 && p<=60){printf("Sua classifica��o: A\n\n");}
	
	if(a<=1.20 && p>=60 && p<=90){printf("Sua classifica��o: D\n\n");}
	
	if(a<=1.20 && p>90){printf("Sua classifica��o: G\n\n");}
	
	//FIM PRIMEIRA LINHA!!
	
	if(a>=1.20 &&a<=1.70 && p<=60){printf("Sua classifica��o: B\n\n");}
    
	if(a>=1.20 &&a<=1.70 && p>=60 && p<=90){printf("Sua classifica��o: E\n\n");}
	
	if(a>=1.20 &&a<=1.70 && p>90){printf("Sua classifica��o: H\n\n");}
	
	//FIM SEGUNDA LINHA!!
	
	if(a>1.70 && p<=60){printf("Sua classifica��o: C\n\n");}
	
	if(a>1.70 && p>=60 && p<=90){printf("Sua classifica��o: F\n\n");}
	
	if(a>1.20 && p>90){printf("Sua classificacao: I\n\n");}
	
	//FIM TERCEIRA LINHA!!
	
system("pause");

return 0;
	
}
