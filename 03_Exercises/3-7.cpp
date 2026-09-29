#include<stdio.h>
int main(void){
	int n,sum=1,summ=0;
	printf("1!+2!+...+N!=");
	printf("\n請輸入一個數字N:");
	scanf("%d",&n);
	for(int a=1;a<=n;a++){
		if(a<n){
			printf("%d!+",a);
		}
		if(a==n){
			printf("%d!=",a);
		}
		sum*=a;
		summ+=sum;
	}
	printf("%d",summ);
}
