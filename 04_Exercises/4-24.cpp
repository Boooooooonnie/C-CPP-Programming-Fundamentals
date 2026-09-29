#include<stdio.h>
int main(void){
	int t,a=1;
	printf("輸入測試資料組數:");
	scanf("%d",&t);
	while(a<=t){
		//a計算輸入了幾個數 
		a+=1;
		//一定要放在while宣告(重複刷新b為0跟sum=1)
		//不然會重複一直乘 
		int sum=1,b=0;
		printf("輸入正整數:");
		scanf("%d",&b);
		while(b>0){
			//值大於0的話就取/10的餘數並乘入sum 
			//先取餘數 
			sum*=b%10;
			//再/10 
			b/=10;
		}
		printf("結果:%d\n",sum);
	}
}
