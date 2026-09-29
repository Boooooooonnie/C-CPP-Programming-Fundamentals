#include<stdio.h>
int main(void){
	int n,sum=0,summ=0;
	scanf("%d",&n);
	for(int x=1;x<=n;x++){
		sum+=x;
		summ+=sum;
	}
	printf("The result is:%d",summ);
}
