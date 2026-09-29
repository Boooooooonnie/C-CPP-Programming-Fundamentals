#include<stdio.h>
int main(void){
	int a,b,c=0;
	printf(":");
	scanf("%d",&a);
	printf("正因數:\n");
	for(int x=1;x<=a;x+=1){
		b=a%x;
		if(b==0){
			printf("%d ",x);
			c+=1;
		}
	}
	printf("\n");
	printf("共%d個正因數",c);
}
