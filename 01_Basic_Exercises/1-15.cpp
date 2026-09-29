//®É¶¡´«ºâ
#include<stdio.h>
int main(void){
	int h,min,sec,ans;
	printf("h,min,sec:");
	scanf("%d %d %d",&h,&min,&sec);
	ans=h*60*60+min*60+sec;
	printf("ans=%d",ans);
}  
