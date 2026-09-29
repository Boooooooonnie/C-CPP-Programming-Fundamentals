#include<stdio.h>
#include<math.h>
int main(void){
	int sum;
	for(int n=1;n;n++){
		sum+=pow(n,2);
		if(sum>1000){
			printf("n=%d",n-1);
			break;
		}
	}
}
