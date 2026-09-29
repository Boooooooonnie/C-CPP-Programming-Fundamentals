#include<stdio.h>
int main(void){
	int a=19000;
	int b=75000;
	int c=500;
	if(a<=13084&&b<=75000&&c<=352){
		printf("學雜費用全額減免");
	}else if(a<=19626&&b<=112500&&c<=528){
		printf("學雜費用減免60%");
	}else{
		printf(" ");
	}
}
