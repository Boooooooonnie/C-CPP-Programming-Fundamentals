#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,c,s,ss,sum;
	scanf("%lf %lf %lf",&a,&b,&c);
	s=(a+b+c)/2;
	ss=s*(s-a)*(s-b)*(s-c);
	sum=sqrt(ss);
	if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
		if(a==b==c){
			printf("%lf 正三角形",sum);
		}else if(a==b|b==c|a==c){
			printf("%lf 等腰三角形",sum);
		}else if((pow(a,2)+pow(b,2))==pow(c,2)|(pow(a,2)+pow(c,2))==pow(b,2)|(pow(b,2)+pow(c,2))==pow(a,2)){
			printf("%lf 直角三角形",sum);
		}else{
			printf("%lf 普通三角形",sum);
		}
	}else{
		printf("不能構成三角形");
	}
}
