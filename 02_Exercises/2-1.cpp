#include<stdio.h>
int main(void){
	double a,b,c,ans;
	printf("3 integers:");
	scanf("%lf %lf %lf",&a,&b,&c);
	ans=(a+b+c)/3;
	printf("%.2f",ans);
} 
