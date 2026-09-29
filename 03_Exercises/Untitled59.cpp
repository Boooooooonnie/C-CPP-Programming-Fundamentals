#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
#include<time.h>
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("退貨數為 ");
	if(a<=5000){
		if(b<=5000*0.02){
			printf("0個");
		}else if(b<=5000*0.05){
			printf("%d個",b);
		}else{
			printf("%d個",a);
		}
	}else{
		if(b<=5000*0.03){
			printf("0個");
		}else if(b<=5000*0.06){
			printf("%d個",b);
		}else{
			printf("%d個",a);	
		}
	}
}
