#include<stdio.h>
int main(void){
	int a,b;
	printf("請輸入客人數目:");
	scanf("%d",&a);
	if(0<=a&&a<=8){
		if(a==0){
			printf("洗衣機要洗0次毛巾");
		}else if(a%2==0){
			b=(a*4)/8;
			printf("洗衣機要洗%d次毛巾",b);
		}else{
			b=(a*4)/8;
			printf("洗衣機要洗%d次毛巾",b+1);
		}
	}else{
		printf("輸入錯誤"); 
	}
}
