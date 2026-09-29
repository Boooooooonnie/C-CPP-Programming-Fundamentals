#include<stdio.h>
int square(int number);
int main(void){
	for(int x=1;x<=10;x++){
		printf("%d ",square(x));
	}
} 
int square(int number){
	return number*number;
}
