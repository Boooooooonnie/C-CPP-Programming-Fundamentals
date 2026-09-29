#include<stdio.h>
int main(void){
	int a,b;
	printf("(0-4):");
	scanf("%d",&a);
	for(int x=a;x>=1;x-=1){
		b=a*2+1;
		printf("%(n+1)d ",b-=1);
	}
}
