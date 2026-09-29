#include<stdio.h>
int main(void){
	int n;
	while(scanf("%d",&n)!=0){
		int sum=0;
		if(n==0){
			break;
		}
		while(1){
			if(n%2==0){
				break;
			}else{
				sum+=1;
			}
			n/=2;
		}
		if(n==1){
			sum+=1;
			break;
		}
		printf("The number of carries is %d.\n",sum);
	}
}
