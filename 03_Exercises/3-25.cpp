#include<stdio.h>
int main(void){
	int h,m,s,ss;
	printf(":");
	scanf("%d",&ss);
	h=ss/60/60;
	m=(ss-h*60*60)/60;
	s=ss-h*60*60-m*60;
	printf("%dh %dmin %dsec",h,m,s);
}
