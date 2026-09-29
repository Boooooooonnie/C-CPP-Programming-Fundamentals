#include<stdio.h>
int main(void){
	int a,b,c,aa,bb,cc,na=1,nb=2,nc=3;
	a=40000+133*20-1500*2;
	printf("1.%d\n",a);
	
	b=39000;
	printf("2.%d\n",b);
	
	c=42000-800*2;
	printf("3.%d\n",c);
	
	while(aa<=15000000){
		na+=1;
		aa=a*na;
	}
	while(bb<=15000000){
		nb+=1;
		bb=b*nb;
	}
	while(cc<=15000000){
		nc+=1;
		cc=c*nc;
	}
	if(na<nb){
		if(na<nc){
			printf("桃園");
		}
		else{
			printf("台南");
		}
	}
	else{
		if(nb>nc){
			printf("台南");
		}
		else{
			printf("台中");
		}
	}
}
