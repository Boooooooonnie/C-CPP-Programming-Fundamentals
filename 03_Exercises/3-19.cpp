#include<stdio.h>
int main(void){
	int sum=0;
	for(int d=1;d;d++){
		sum+=d;
		if(sum>=1000){
			printf("第 %d 天時已經額滿",d);
			break;
		}
		
	}
}
