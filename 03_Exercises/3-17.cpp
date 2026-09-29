#include<stdio.h>
int main(void){
	int a,b;
	printf("請輸入小明跑步的圈數(0~12):\n");
	scanf("%d",&a);
	if(0<=a&&a<=12){
		a=a*500;
		b=(6000-a)/10;
		printf("小名須跳 %d 下跳繩才能達成目標",b);
	}else{
		printf("輸入數字錯誤");
	}
}
