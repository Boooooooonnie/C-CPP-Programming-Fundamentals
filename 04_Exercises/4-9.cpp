#include<stdio.h>
int main(void){
	int a,b,sum=1,summ=1;
	scanf("%d %d",&a,&b);
	for(int x=1;x<=a;x++){
		for(int y=1;y<=b;y++){
			if(a%x==0&&b%y==0&&x==y){
				printf("%d ",x);
				sum*=x;
			}
		}
	}
	printf("\n");
	summ=sum*(a/sum)*(b/sum);
	printf("%d",summ);
}
