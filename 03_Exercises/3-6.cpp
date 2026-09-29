#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
int main(void){
	int t=1,a,b;
	srand(time(NULL));
	a=(rand()%100)+1;
	printf("Guess number\n");
	printf("%d. 1-100 =>",t);
	scanf("%d",&b);
	while(b!=a){
		if(b<a){
			printf("Too Small!\n");
		}else{
			printf("Too Big!\n");
		}
		t++;
		printf("Guess number\n");
		printf("%d. 1-100 =>",t);
		scanf("%d",&b);
	}
	printf("Bingo! You Spend %d times.",t);
}
