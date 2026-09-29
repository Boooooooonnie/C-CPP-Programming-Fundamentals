#include<stdio.h>
#include<math.h>
int main(void){
	double p=10000,i=1,s,sum=0,n=1;
	sum+=s;
	for(int n=1;n<=5;n+=1){
		i*=1.12;
		s=p*i;
		sum+=s;
		printf("第%d年 利率:%.2f 本利和:%.2f 總共:%.2f\n",n,i,s,sum);
		if(sum>=p*5){
			printf("==>儲蓄%d年知本利和 =%.2f",n,sum);
			break;
		}
	}
}
