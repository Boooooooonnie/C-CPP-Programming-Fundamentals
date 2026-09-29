#include<stdio.h> 
int main(void){ 
	int n; 
	while(scanf("%d",&n)!=0){
		if(n==0){
			break;
		} 
		int sum=0;
		while(1){ 
			if(n%2==1){
				sum++;
			}else{
				break;
			}
			n=n/2; 
			if(n==1){ 
				sum++; 
				break; 
			}		 
		} 
		
		printf("¶i¦ì%d¦¸\n",sum); 
	}
}
