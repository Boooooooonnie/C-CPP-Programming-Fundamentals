#include<stdio.h>
int main(void){
	int n;
	double sum=0,summ;
	printf("N=");
	scanf("%d",&n);
	if(n%2==0){
		for(int x=2;x<=n;x+=2){
			sum+=(1.0/x);//1.0¸ò1¤£¤@¼Ë 
		}
		printf("%lf",sum);
	}else{
		for(int y=1;y<=n;y+=2){
			summ+=(1.0/y);
		}
		printf("%lf",summ);
	}
}
