#include<stdio.h>
#include<stdlib.h>
int main(void){
	int s;
	printf("Enter seed:");
	scanf("%d",&s);
	srand(s);
	for(int x;x<=10;x++){
		printf("%d ",1+(rand()%3));
	}
}
