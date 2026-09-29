#include<stdio.h>
int main(void){
	int a;
	double b=4500;
	printf("請輸入生日月分:");
	scanf("%d",&a);
	if(a==8){
		printf("您是本月的壽星\n");
		printf("所需支付的金額為%.0f元",b*0.9);
	}else{
		printf("您不是本月的壽星\n");
		printf("所需支付的金額為4500元");
	}
}
