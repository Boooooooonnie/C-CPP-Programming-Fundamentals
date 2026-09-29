#include<stdio.h>
#include<math.h>
int main(void){
	double a,aa,b,bb,c,cc,sum;
	scanf("%lf %lf %lf",&a,&b,&c);
	aa=sqrt(a)*10;
	bb=sqrt(b)*10;
	cc=sqrt(c)*10;
	sum=((sqrt(a)+sqrt(b)+sqrt(c))*10)/3;
	printf("%.2f",sum);
}
