#include<stdio.h>
#include<math.h>
int main(void){
	double s;
	printf("請輸入原始分數:");
	scanf("%lf",&s);
	s=sqrt(s)*10;
	printf("新分數:%.3f 等級:",s);
	if(s<60){
		printf("E");
	}else if(s<70){
		printf("D");
	}else if(s<80){
		printf("C");
	}else if(s<90){
		printf("B");
	}else{
		printf("A");
	}
}
