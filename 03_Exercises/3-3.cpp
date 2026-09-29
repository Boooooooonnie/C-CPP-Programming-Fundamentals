#include<stdio.h>
#include<math.h>
int main(void){
	double a,b,bmi;
	printf("身高:");
	scanf("%lf",&a);
	printf("體重:");
	scanf("%lf",&b);
	a=a/100;
	bmi=b/(pow(a,2));
	printf("%lf ",bmi);
	if(bmi<18.5){
		printf("體重過輕");
	}else if(bmi<24){
		printf("正常體重");
	}else if(bmi<27){
		printf("體重過重");
	}else if(bmi<30){
		printf("輕度肥胖");
	}else if(bmi<35){
		printf("中度肥胖");
	}else{
		printf("重度肥胖");
	}
}
