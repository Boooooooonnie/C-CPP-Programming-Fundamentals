#include<stdio.h>
int main(void){
	int a;
	double b;
	printf(":");
	scanf("%d",&a);
	if(a<=100){
		b=a*9.8;
		printf("salary:%.0f",b);
	}else if(a<=200){
		b=(100*9.8)+((a-100)*9.8*1.2);
		printf("salary:%.0f",b);
	}else{
		b=(100*9.8)+(100*9.8*1.2)+((a-200)*9.8*1.5);
		printf("salary:%.0f",b);
	}
}
