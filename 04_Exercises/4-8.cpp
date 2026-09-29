#include<stdio.h>
int main(void){
	int l,a;
	printf("The number of levels:");
	scanf("%d",&l);
	for(int n=0;n<=l;n+=1){
		a=1;
		for(int x=1;x<=3*(l-n);x+=1){
			printf(" ");
		}
		printf("%d",a);
		for(int y=1;y<=n;y+=1){
			a=a*(n-y+1)/y;
			printf("%6d",a);
		}
		printf("\n");
	}
}
