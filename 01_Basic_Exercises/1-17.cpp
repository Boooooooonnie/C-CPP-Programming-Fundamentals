#include<stdio.h>
int main(void){
	double DBP,SBP,MAP;
	printf("DBP:");
	scanf("%lf",&DBP);
	printf("SBP:");
	scanf("%lf",&SBP);
	MAP=DBP+(SBP-DBP)/3;
	printf("%lf mmhg",MAP);
} 
