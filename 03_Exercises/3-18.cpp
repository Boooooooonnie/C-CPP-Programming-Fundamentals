#include<stdio.h>
int main(void){
	int n=0,sum,summ;
	printf("No. Men Women Children\n");
	for(int x=1;x<=30;x++){
		for(int y=1;y<=30;y++){
			for(int z=1;z<=30;z++){
				sum=x+y+z;
				summ=x*3+y*2+z;
				if(sum==30&&summ==50){
					n++;
					printf("%2d:%4d%6d%9d\n",n,x,y,z);
				}
			}
		}
	}
}
