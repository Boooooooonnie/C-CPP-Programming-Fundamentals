#include<stdio.h>
int main(void){
	int h,hh,m,mm;
	printf(":");
	scanf("%d %d",&h,&m);
	if(h<12){
		hh=12-h;
		mm=60-m;
		printf("%dh %dmin",hh-1,mm);
	}else{
		printf("over");
	}
}
