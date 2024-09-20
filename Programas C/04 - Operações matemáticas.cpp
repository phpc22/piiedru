#include <stdio.h>

int main(){
	
	int myAge = 22, momAge = 50, dadAge = 51, sisAge = 18, totalAge;
	
	totalAge = (myAge + momAge + dadAge / sisAge - 100) * 2;
	
	printf("the total age of my family are %i", totalAge);
	
return 0;
}
