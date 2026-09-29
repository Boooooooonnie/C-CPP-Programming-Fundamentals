#include<stdio.h>
int main(void){
	int a,b,sum=1,summ;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(a%i==0&&b%j==0){
				if(i==j){
					printf("%d ",i);
					sum*=i;
				}
			}
		}
	}
	printf("\n");
	summ=sum*(sum/a)*(sum/b);
	printf("%d",summ);
}
