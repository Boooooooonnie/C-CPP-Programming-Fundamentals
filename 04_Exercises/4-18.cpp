#include<stdio.h>
int main(void){
	double a,b=3580;
	printf("birthday:");
	scanf("%lf",&a);
	if(0<a&&a<13){
		if(a==8){
			printf("是本月壽星\n");
			printf("pay:%.2f",b*0.9);
		}else{
			printf("非本月壽星\n");
			printf("pay:%.2f",b);
		}
	}else{
		printf("重新輸入");
	}
}
