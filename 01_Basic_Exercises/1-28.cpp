#include<stdio.h>
int main(void){
	double r,ans1,ans2;
	printf("r:");
	scanf("%lf",&r);
	ans2=r*r*4*3.14159;
	ans1=(r*r*r*3.14159*4)/3;
	printf("%.2f %.2f",ans1,ans2);
} 
