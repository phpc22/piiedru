#include <stdio.h>

void troca_AE(char str[]){
int i;
for(i= 0; i < strlen(str); i++)
if (str[i] == 'A')
str[i]= 'E';

}

int main(void){
char ch[10]= "ccAAccAA";
printf("%s \n", ch);
troca_AE(ch);
printf("%s", ch);

getch();
return 0;
}
