#include<stdio.h>
int main(void){
	int a,sum=0,y=1;
	a=100000*30;
	for(int x=1;x<30;x++){
		y*=2;
		sum+=y;
	}
	sum=sum/100;
	printf("陌生人給百萬富翁:%d 元\n",a);
	printf("百萬富翁給陌生人:%d 元",sum);
}
