#include<stdio.h>
int main(void){
	double t,b,h,ans;
	printf("t,b,h:");
	scanf("%lf %lf %lf",&t,&b,&h);
	ans=((t+b)*h)/2;
	printf("%lf",ans);
} 
