#include<stdio.h>
int main(void){
	int n,sum=0,summ=0;
	printf("N=");
	scanf("%d",&n);
	if(n%2==0){
		for(int x=2;x<=n;x+=2){
			sum+=x;
		}
		printf("%d",sum);
	}else{
		for(int y=1;y<=n;y+=2){
			summ+=y;
		}
		printf("%d",summ);
	}
}
