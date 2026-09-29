#include<stdio.h>
int main(void){
	for(int x=1;x<=21;x++){
		printf("%3d",x);
		if(x==1|x==3|x==6|x==10|x==15|x==21){
			printf("\n");
		}
	}
}
