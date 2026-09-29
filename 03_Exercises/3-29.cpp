#include<stdio.h>
int main(void){
	int s;
	double sum;
	scanf("%d",&s);
	if(s<=100){
		sum=s*2.8;
	}else if(s<=200){
		sum=(100*2.8)+((s-100)*3);
	}else if(s<=300){
		sum=(100*2.8)+(100*3)+((s-200)*3.2);
	}else{
		sum=(100*2.8)+(100*3)+(100*3.2)+((s-300)*3.4);
	}
	printf("%.1f",sum);
}
