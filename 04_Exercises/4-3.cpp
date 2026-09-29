#include<stdio.h>
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("退貨數為 ");
	if(a<=5000){
		if(b<=a*0.02){
			printf("0 個");
		}else if(b<=a*0.05){
			printf("%d 個",b);
		}else{
			printf("%d 個",a);
		}
	}else{
		if(b<=a*0.03){
			printf("0 個");
		}else if(b<=a*0.06){
			printf("%d 個",b);
		}else{
			printf("%d 個",a);
		}
	}
}
