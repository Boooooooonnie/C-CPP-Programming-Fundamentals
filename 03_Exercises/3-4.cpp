#include<stdio.h>
int main(void){
	int a,h,m,s;
	scanf("%d",&a);
	h=a/60/60;
	m=(a-h*60*60)/60;
	s=a-h*60*60-m*60;
	printf("%d %d %d",h,m,s);
}
