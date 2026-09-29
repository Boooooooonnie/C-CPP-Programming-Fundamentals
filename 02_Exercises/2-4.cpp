#include<stdio.h>
int main(void){
	double dollar,nt,gbp;
	printf("dollar:");
	scanf("%lf",&dollar);
	nt=dollar/32.35;
	gbp=dollar/48.09;
	printf("%lf %lf",nt,gbp);
} 
