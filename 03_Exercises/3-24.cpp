#include<stdio.h>
int main(void){
	int s,ss;
	printf("sall:");
	scanf("%d",&s);
	if(s<=20){
		ss=15000+s*380;
		printf("salary:%d",ss);
	}else if(s<=40){
		ss=15000+s*420;
		printf("salary:%d",ss);
	}else{
		ss=15000+s*420+(s/10)*1500;
		printf("salary:%d",ss);
	}
}
