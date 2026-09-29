#include<stdio.h>
int main(void){
	int f1,ff,sum=0,f=90*30*20;
	printf("day1 fat:");
	scanf("%d",&f1);
	//if x<=20 會多算一筆資料 
	for(int x=0;x<20;x+=1){
		ff=f1-x*50;
		sum+=ff;
	}
	printf("day20 total of fat:%d",sum);
	printf("\n");
	if(sum<f){
		printf("less than normal(%d)",f);
	}else if(sum==f){
		printf("equal to normal(%d)",f);
	}else{
		printf("more than normal(%d)",f);
	}
}
