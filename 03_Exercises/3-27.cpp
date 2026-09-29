#include<stdio.h> 
int main(void){
	int a,sum=1;
	scanf("%d",&a);
	while(a>0){
		//先取餘數 
		sum*=(a%10);
		//接著除到小於0為止 
		a/=10;	
	}
	printf("%d",sum);
}
