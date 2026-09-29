#include<stdio.h>
int main(void){
	int a,b,c; 
	printf("必修學分:");
	scanf("%d",&a);
	printf("選修學分:");
	scanf("%d",&b);
	printf("通識學分:");
	scanf("%d",&c);
	if(a==69){
		if(b<31){
			printf("選修學分未達標\n");
		}
		if(c<28){
			printf("通識學分未達標");
		}
	}else{
		printf("必修學分有誤");
	}
}
