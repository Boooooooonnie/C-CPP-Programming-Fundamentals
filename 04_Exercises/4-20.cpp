#include<stdio.h>
int main(void){
	int a,b,c;
	printf("必修學分:");
	scanf("%d",&a);
	printf("選修學分:");
	scanf("%d",&b);
	printf("通識學分:");
	scanf("%d",&c);
	if(a==69&&b>=31&&c>=28){
		printf("達畢業門檻");
	}
	if(a>69){
		printf("必修學分有問題\n");
	}
	if(a<69){
		printf("必修學分差%d\n",69-a);
	}
	if(b<31){
		printf("選修學分差%d\n",31-b);
	}
	if(c<28){
		printf("通識學分差%d",28-c);
	}
}
