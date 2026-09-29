#include<stdio.h>
int main(void){
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a/10000;
	c=(a-b*10000)/1000;
	d=(a-b*10000-c*1000)/100;
	e=(a-b*10000-c*1000-d*100)/10;
	f=a-b*10000-c*1000-d*100-e*10;
	if(b==f&&c==e){
		printf("¬O");
	}else{
		printf("§_");
	}
}
