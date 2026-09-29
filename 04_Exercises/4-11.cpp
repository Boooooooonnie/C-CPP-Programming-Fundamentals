#include<stdio.h>
int main(void){
	int a,b;
	printf("請輸入一個大於1的正整數:");
	scanf("%d",&a);
	for(int x=1;x<=a;x++){
		if(a%x==0){
			b++;
		}
	}
	if(b<=2){
		printf("質數!");
	}else{
		for(int y=1;y<=a;y++){
			if(a%y==0){
				printf("%d ",y); 
			}
		}
	}
}
