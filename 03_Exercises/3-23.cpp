#include<stdio.h>
int main(void){
	int a,b;
	int c=350,d=750;
	printf("是否為學生?1:是2:不是\n");
	printf("購買物品為?1:枕頭2:床包\n");
	scanf("%d %d",&a,&b);
	if(a==1|a==2){
		if(a==1){
			if(b==1){
				printf("需支付%.0f元",c*0.9);
			}else if(b==2){
				printf("需支付%.0f元",d*0.9);
			}else{
				printf("輸入錯誤");
			}
		}else{
			if(b==1){
				printf("需支付350元");
			}else if(b==2){
				printf("需支付750元");
			}else{
				printf("輸入錯誤");
			}
		}
	}else{
		printf("輸入錯誤");
	}
}
