#include<stdio.h>
int main(void){
	int m,d;
	double mm;
	printf("money day later:");
	scanf("%d %d",&m,&d);
	mm=m-10*d;
	if(d%7==2|d%7==5){
			printf("%.2f",mm*0.6);
	}else{
			printf("%.2f",mm);
	}
}
