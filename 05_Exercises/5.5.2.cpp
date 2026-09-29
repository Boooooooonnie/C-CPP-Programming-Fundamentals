#include<stdio.h>
int max(int x,int y,int z);
int main(void){
	int n1,n2,n3;
	printf("Enter 3 intrgers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("max : %d",max(n1,n2,n3));
}
int max(int x,int y,int z){
	int maxx=x;
	if(y>maxx){
		maxx=y;
	}
	if(z>maxx){
		maxx=z;
	}
	return maxx;
}
