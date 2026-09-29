//ªü©i´µ§§¼Æ
#include<stdio.h>
int main(void){
	int amos,a,b,c;
	printf("integer:");
	scanf("%d",&amos);
	a=amos/100;
	b=(amos-a*100)/10;
	c=(amos-a*100-b*10)/1;
	if(amos=a+b+c){
		printf("yes");
	}
	else{
		printf("no");
	}
}  
