#include<stdio.h>
int square(int x);
int main(void){
	int a;
	scanf("%d",&a);
	printf("%d",square(a));
}
int square(int x){
	return x*x;
}
