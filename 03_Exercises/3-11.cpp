#include<stdio.h>
int main(void){
	int s;
	printf("Enter score:");
	scanf("%d",&s);
	printf("Grade: ");
	if(s<60){
		printf("E");
	}else if(s<70){
		printf("D");
	}else if(s<80){
		printf("C");
	}else if(s<90){
		printf("B");
	}else{
		printf("A");
	}
}
