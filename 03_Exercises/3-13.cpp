#include<stdio.h>
int main(void){
	int y,m;
	scanf("%d %d",&y,&m);
	if(y%4==0&&y%100!=0|y%400==0){
		printf("%d年是閏年",y);
	}else{
		printf("%d年不是閏年",y);
	}
	printf("\n該季節是:");
	if(m==3|m==4|m==5){
		printf("春季");
	}else if(m==6|m==7|m==8){
		printf("夏季");
	}else if(m==9|m==10|m==11){
		printf("秋季");
	}else if(m==1|m==2|m==12){
		printf("冬季");
	}else{
		printf("沒有此季節");
	}
	printf("\n當月天數:");
	if(m==2){
		if(y%4==0&&y%100!=0|y%400==0){
			printf("29");
		}else{
			printf("28");
		}
	}else if(m==8){
		printf("31");
	}else if(m<=7){
		if(m%2==0){
			printf("30");
		}else{
			printf("31");
		}
	}else if(m<=12){
		if(m%2==0){
			printf("31");
		}else{
			printf("30");
		}
	}else{
		printf("0");
	}
}
