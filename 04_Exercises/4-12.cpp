#include<stdio.h>
int main(void){
	int a;
	char b;
	printf(":");
	scanf("%d %c",&a,&b);
	for(int x=0;x<=a;x+=1){
		printf("%c",b);
		printf("\n");
	}
} 
