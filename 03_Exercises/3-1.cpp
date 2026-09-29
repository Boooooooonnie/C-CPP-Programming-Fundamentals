#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,sum;
	scanf("%lf %lf %lf",&a,&b,&c);
	a=sqrt(a)*10;
	b=sqrt(b)*10;
	c=sqrt(c)*10;
	sum=(a+b+c)/3;
	printf("%.2f",sum);
} 
