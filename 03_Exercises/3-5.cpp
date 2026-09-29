#include<stdio.h>
int main(void){
	int a,sum;
	scanf("%d",&a);
	if(a<30){
		printf("0");
	}else if(a<480){
		if(a%30==0){
			sum=(a/30)*15;
			printf("%d",sum);
		}else{
			sum=(a/30+1)*15;
			printf("%d",sum);
		}
	}else{
		printf("240");
	}
}
