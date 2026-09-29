#include<stdio.h>
int main(void){
	int a,b,c;
	printf("輸入 a,b:");
	scanf("%d %d",&a,&b);
	while(1){
		printf("%d+%d=",a,b);
		scanf("%d",&c);
		if(a+b==c){
			printf("你答對了!");
			break;
		}
	}
}
