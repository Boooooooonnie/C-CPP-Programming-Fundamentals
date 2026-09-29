#include<stdio.h>
int main(void){
	int y,m,d,sum,summ;
	printf(":");
	scanf("%d %d %d",&y,&m,&d);
	//判斷是否閏年  
	if(y%100!=0 && y%4==0 | y%100==0 | y%400==0){
		//假設每個月30天 
		sum=d+(30*(m-1));
		if(m>=2){
			//閏年2月29天 
			if(m==2){
				summ=sum-1+(m/2);
				printf("its the %dth day",summ);
			//閏年2月比其它年多1天 : summ+1 
			}else if(m>=8){
				summ=sum-2+(m/2);
				printf("its the %dth day",summ+1);
			//8月有31天 照原來算法會少算1天 
			}else{
				summ=sum-2+(m/2);
				printf("its the %dth day",summ+2);
			}
		}else{
			//1月 
			summ=sum;
			printf("its the %dth day",summ);
		}
	}else{
		sum=d+(30*(m-1));
		if(m>=2){
			if(m<=8){
				summ=sum-2+(m/2);
				printf("its the %dth day",summ);
			}else{
				summ=sum-2+(m/2);
				printf("its the %dth day",summ+1);
			}
		}else{
			summ=sum;
			printf("its the %dth day",summ);
		}
	} 
}
