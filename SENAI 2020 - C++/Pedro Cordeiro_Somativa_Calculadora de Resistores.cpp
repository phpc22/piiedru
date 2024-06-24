#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<conio.h>



int Serie ()
{	

system("color 06");
setlocale(LC_ALL, "portuguese");
	
	int A = 0;
	float n;
	float i;
	float s=0;
 
	while(A == 0)
	
	{
		
	printf("Digite o numero de quantos resistores voce deseja calcular? \n");
	scanf("%f",&n);
	
	do{
	
	system("cls");
 	printf("digite o valor do resistor:\n");
 	scanf("%f",&i);
 	s=i+s;
 	n--;
 	
	}
	 
	while(n!=0);
	 
 	system("cls");
	printf("O resultado eh %.3f Ohms \n\n\n\n", s);
	
	printf("========================================================\n");
	printf("||                                                    ||\n");
	printf("||                Calcular Novamente?                 ||\n");
	printf("||                                                    ||\n");
	printf("||            SIM (0)           NAO (1)               ||\n");
	scanf("%f",&A);
	system("cls");
 
	}
	
}

 int Paralelo ()
{

system("color B5");
setlocale(LC_ALL, "portuguese");

	int B=0;
	float m;
	float h;
	float p=0;
	float o;
 
	while(B == 0)
	
	{

	printf("Digite o numero de quantos resistores voce deseja calcular? \n");
	scanf("%f",&m);
	
	do{
 	
	system("cls");
 	printf("digite o valor do resistor:\n");
 	scanf("%f",&h);
 	p=(1/h)+(p);
 	m--;
	
	}
	
	while(m!=0);
 
 o= 1/p;
 
	printf("O resultado eh %.3f Ohms \n\n", o);
	printf("========================================================\n");
	printf("||                                                    ||\n");
	printf("||                Calcular Novamente?                 ||\n");
	printf("||                                                    ||\n");
	printf("||            SIM (0)           NAO (1)               ||\n");
	scanf("%f",&B);
	system("cls");
 
	}
	
	
}


 int Ohm ()
{
	
system("color 0A");
setlocale(LC_ALL, "portuguese");

	int C=0;
	int D = 0; 
	float I=0;
	float R=0;
	float U=0;
	
	while(C == 0)
	
	{
	
	printf("========================================\n");
	printf("||        ESCOLHA A GRANDEZA          ||\n");
	printf("||                                    ||\n");
	printf("|| (1) Tensao                         ||\n");
	printf("|| (2) Corrente                       ||\n");
	printf("|| (3) Resistencia                    ||\n");
	printf("|| (4) VOLTAR                         ||\n");
	scanf("%d",&D);
	
	switch(D)
	
	{
		
	case 1 :printf("Digitte o valor da Corrente :\n");
			scanf("%f",& I);
			printf("Digite o valor da Resistencia :\n");
			scanf("%f",& R);
			U= R*I ;
			system("cls");
			printf("O valor da Tensao eh de %.3f V \n", U);break;
			
	case 2 :printf("Digitte o valor da Tensao :\n");
			scanf("%f",& U);
			printf("Digite o valor da Resistencia :\n");
			scanf("%f",& R);
			I= U/R;
			system("cls");
			printf("O valor da Corrente eh de %.3f A \n", I);break;
			
	case 3 :printf("Digitte o valor da Tensao :\n");
			scanf("%f",& U);
			printf("Digite o valor da Corrente :\n");
			scanf("%f",& I);
			R = U/I ;
			system("cls");
			printf("O valor da Resistencia eh de %.3f ohms \n",R);
			break;
			
	case 4 :system ("cls");	
			C = 0;break;
		 	
	default :printf("Opcao Indisponivel \n");
			system ("cls");
			C = 0;
		 	break;
		 	
	}
	
	system("cls");
	printf("========================================================\n");
	printf("||                                                    ||\n");
	printf("||                Calcular Novamente?                 ||\n");
	printf("||                                                    ||\n");
	printf("||            SIM (0)           NAO (1)               ||\n");
	scanf("%d",& C);
	system("cls");
		
	}
	
}

 int Cor ()
 {
 	
system("color 61");
setlocale(LC_ALL, "portuguese");
 	
	int rc = 1;
	int pf,ppf;
	int sf;
	int tcf;
	int qf;
	int tlr;
	float nmr;
	float vlf=0;
	float tl;

	while(rc==1)
	
	{
		
		
 		printf("==================================================================================\n");	
		printf("|     Cores   |   1 Faixa    |    2 Faixa    |  Multiplicador |   Tolerancia   |\n");
		printf("| Preto       |       0       |        0       |    0 (x1)      |                |\n");
		printf("| Marrom      |       1       |        1       |    1 (x10)     |    1 (+/- 1)   |\n");
		printf("| Vermelho    |       2       |        2       |    2 (x100)    |    2 (+/- 2)   |\n");
		printf("| Laranja     |       3       |        3       |    3 (x1K)     |                |\n");
		printf("| Amarelo     |       4       |        4       |    4 (x10K)    |                |\n");
		printf("| Verde       |       5       |        5       |    5 (x100K)   |    5 (+/- .5)  |\n");
		printf("| Azul        |       6       |        6       |    6 (x1M)     |    6 (+/- .25) |\n");
		printf("| Violeta     |       7       |        7       |    7 (x10M)    |    7 (+/- .1)  |\n");
		printf("| Cinza       |       8       |        8       |                |    8 (+/- .05) |\n");
		printf("| Branco      |       9       |        9       |                |                |\n");
		printf("| Dourado     |       10      |        10      |    10 (x.1)    |    10 (+/- 5)  |\n");
		printf("| Prateado    |       11      |        11      |    11 (x.01)   |    11 (+/- 10) |\n");
	    printf("==================================================================================\n");	
	
   
    	
    	printf("Digite a cor da primeira faixa do resistor \n");
    	scanf("%d",&pf);
    	ppf = pf*10;
    	
    	printf("Digite a cor da segunda faixa do resistor \n");
    	scanf("%d",&sf);
    	
    	printf("Digite a cor da terceira faixa do resistor - MULTIPLICADOR \n");
    	scanf("%d",&tcf);
    	
    	printf("Digite a cor da quarta faixa do resistor  - TOLERANCIA \n");
    	scanf("%d",&tlr);

        nmr = ppf + sf;
        
    	
    	if(tcf == 0){
    		vlf= nmr*1;	
		}
		
		if(tcf == 1){
    		vlf= nmr*10;	
		}
		
		if(tcf == 2){
    		vlf= nmr*100;	
		}
		
		if(tcf == 3){
    		vlf= nmr*1000;	
		}
		
		if(tcf == 4){
    		vlf= nmr*10000;	
		}
		
		if(tcf == 5){
    		vlf= nmr*100000;	
		}
		
		if(tcf == 6){
    		vlf= nmr*1000000;	
		}
		
		if(tcf == 7){
    		vlf= nmr*10000000;	
		}
		
		if(tcf == 10){
    		vlf= nmr*0,1;	
		}
		
		if(tcf == 11){
    		vlf= nmr*0,01;	
		}
		
		if(tlr == 1){
    		tl = 1;	
		}
		
		if(tlr == 2){
    		tl = 2;	
		}
		if(tlr == 5){
    		tl = 0,5;	
		}
		if(tlr == 6){
    		tl = 0,25;	
		}
		if(tlr == 7){
    		tl = 0,1;	
		}
		if(tlr == 10){
    		tl = 0,5;	
		}
		if(tlr == 11){
    		tl = 0,10;	
		}
		
	system("cls");	
    printf("O valor ohmico do seu resistor eh de: %.2f  Ohms\n", vlf);
    printf("O Valor da tolerancia deste resistor eh de:  +/- %.2f \n\n",tl);
    
	printf("========================================================\n");
	printf("||                                                    ||\n");
	printf("||                Calcular Novamente?                 ||\n");
	printf("||                                                    ||\n");
	printf("||            SIM (0)           NAO (1)               ||\n");
	scanf("%d",&rc);
	system("cls");
    
	}
	
}



 int valor()
{

system("color 80");
setlocale(LC_ALL, "portuguese");
	
	int cpv = 0;
	int pd;
	int sd;
	int qdz;
	float pct;


	while(cpv == 0)
	
	{
		
		printf("\n Qual o primeiro digito do valor do resistor desejado?\n");
		scanf("%d",&pd);
	
		printf("\n Qual o segundo digito do valor do resistor desejado?\n");
		scanf("%d",&sd);
		
		printf("\n Quantos zeros existem apos o 2 digito? \n");
		scanf("%d",&qdz);
		
		printf("\n Qual a tolerancia desse resistor (em Porcentagem)? \n");
		scanf("%f",&pct);
		
		
		if(pd==0){
			printf("\n Preto");
		}
		if(pd==1){
			printf("\n Marrom");
		}
		if(pd==2){
			printf("\n Vermelho");
		}
		if(pd==3){
			printf("\n Laranja");
		}
		if(pd==4){
			printf("\n Amarelo");
		}
		if(pd==5){
			printf("\n Verde");
		}
		if(pd==6){
			printf("\n Azul");
		}
		if(pd==7){
			printf("\n Violeta");
		}
		if(pd==8){
			printf("\n Cinza");
		}
		if(pd==9){
			printf("\n Branco");
		}
			
			
			
		if(sd==0){
		printf(" Preto");
		}
		if(sd==1){
			printf(" Marrom");
		}
		if(sd==2){
			printf(" Vermelho");
		}
		if(sd==3){
			printf(" Laranja");
		}
		if(sd==4){
			printf(" Amarelo");
		}
		if(sd==5){
			printf(" Verde");
		}
		if(sd==6){
			printf(" Azul");
		}
		if(sd==7){
			printf(" Violeta");
		}
		if(sd==8){
			printf(" Cinza");
		}
		if(sd==9){
			printf(" Branco");
		}
			
		
		if(qdz== -1){
		printf(" Dourado");
		}
		if(qdz== -2 ){
		printf(" Prata");
		}
		if(qdz==0){
		printf(" Preto");
		}
		if(qdz==1){
			printf("  Marrom");
		}
		if(qdz==2){
			printf(" Vermelho");
		}
		if(qdz==3){
			printf(" Laranja");
		}
		if(qdz==4){
			printf(" Amarelo");
		}
		if(qdz==5){
			printf(" Verde");
		}
		if(qdz==6){
			printf(" Azul");
		}
		if(qdz==7){
			printf(" Violeta");
		}
		if(qdz==8){
			printf(" Cinza");
		}
		if(qdz==9){
			printf(" Branco");
		}
			
		
		if(pct==0){
		printf(" Preto");
		}
		if(pct==1){
			printf("  Marrom");
		}
		if(pct==2){
			printf(" Vermelho");
		}
		
		if(pct==0.5){
			printf(" Verde");
		}
		if(pct==0.25){
			printf(" Azul");
		}
		if(pct==0.1){
			printf(" Violeta");
		}
		if(pct==0.05){
			printf(" Cinza");
		}
		if(pct==0.5){
			printf(" ( Ou Dourado)");
		}
		if(pct==0.1){
			printf(" ( Ou Prata)");
		}
		
	system("cls");
	printf("========================================================\n");
	printf("||                                                    ||\n");
	printf("||                Calcular Novamente?                 ||\n");
	printf("||                                                    ||\n");
	printf("||            SIM (0)           NAO (1)               ||\n");
	scanf("%d",&cpv);
		
	}

	
}


int main()
{
	
	system("color F0");
	setlocale(LC_ALL, "portuguese");
	
int e =0;
int r = 0;
	
	printf("===========================================\n");
	printf("|| BEM VINDO A CALCULADORA DE RESISTORES ||\n");
	printf("||     ESCOLHA UMA DAS OPCOES ABAIXO     ||\n\n\n");	

while(r==0)

{
	
	printf("===================================================================\n");
	printf("||           ESCOLHA UMA DAS OPCOES ABAIXO DESEJADA              ||\n");
	printf("||                                                               ||\n");
	printf("|| (1) Calculo de Resistencia Equivalente em SERIE               ||\n");
	printf("|| (2) Calculo de Resistencia Equivalente em PARALELO            ||\n");
	printf("|| (3) 1 Lei de Ohm                                             ||\n");
	printf("|| (4) Mostrar Cores de Resistores pelo Valor Inserido           ||\n");
	printf("|| (5) Mostrar Valores de Resistores pela Cor Inserida           ||\n");
	printf("||                                                               ||\n");
	scanf("%d",& e);
	
	switch(e)
	
	{
		
		case 1 : system("cls"); Serie();break;
		case 2 : system("cls"); Paralelo();break;
		case 3 : system("cls"); Ohm();break;
		case 4 : system("cls"); Cor();break;
		case 5 : system("cls"); valor();break;
		default : system("cls"); printf("Funcao Indisponivel!!\n");break;
		
	}
	
	printf("========================================================\n");
	printf("||                                                    ||\n");
	printf("||         Deseja voltar ao Menu Principal?           ||\n");
	printf("||                                                    ||\n");
	printf("||            SIM (0)           NAO (1)               ||\n");
	scanf("%d",& r);
	system("cls");
	
}	
printf("\n Obrigado por utilizar a Calculadora de Resistores \n\n\n\n");
printf("����������o�������������������������������\n");
printf("������������������������������������������\n");
printf("����������o�$�����������������������������\n");
printf("������������������������������������������\n");
printf("������������������������������������������\n");
printf("�����������oo��o��������������������������\n");
printf("�����������11�����������������������������\n");
printf("������������������������������������������\n");
printf("�������������1�1��7�����������������������\n");
printf("������������������������������������������\n");
printf("���������������o���1����������������������\n");
printf("��������������������1��$�o����������������\n");
printf("��������������������������o1��������������\n");
printf("����������17�����1�������$����7�����������\n");
printf("�����������7����7�����71�77��1oo����������\n");
printf("���������������$������77$1$���������������\n");
printf("�����������7�����������11��$7�������������\n");
printf("���������7��o��������o�1�o����7�����������\n");
printf("����������7���o����o����1����o������������\n");
printf("������������������o��o�����17���1o��������\n");
printf("�������������������1�o1���$�����1o1�������\n");
printf("��������������o�7��������o�����1�1o�������\n");
printf("��������������7o�1��������o����7����������\n");
printf("������������������o�o����o�o����17$7������\n");
printf("�����������������������1��o��������$������\n");
printf("���������������1������������7�����$�������\n");
printf("������������7�7o7$o71��������������$������\n");
printf("������������7�7��������7�����$������������\n");
printf("��������������o��$����������$�1�����������\n");
printf("����������1��������1�������������17�������\n");
printf("����������������7�7�����o�1$�7����1�������\n");
printf("���������o�������7������1$$������11�������\n");
printf("��������1�������7������������1������������\n");
printf("����������1���������������������7���������\n");
printf("�������������o����������������������������\n");
printf("�������7����������������������������������\n");
printf("���������������������������������o�$������\n");
printf("�������7�7$�������������������������������\n");
printf("���$$���1�������������������������1�������\n");
printf("�17o���1����������������������������o�����\n");
printf("������11������������������������71���o�1��\n");
printf("o1o���1���������������������������o�o�����\n");
printf("������������������������������������7�7�o�\n\n\n");

system("pause");
return 0;
	
}

