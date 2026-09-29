#include<stdio.h>
int main(void){
	int sum;
	for(int d=1;d>0;d++){
		sum+=(200*8);
		if(sum>=20000){
			printf("%d",d);
			break;
		}
	}
}
