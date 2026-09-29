#include<stdio.h>
#include<math.h>
int main(void){
	double x1,x2,y1,y2,ans1,ans2;
	printf("enter A B :");
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	ans1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	ans2=(y2-y1)/(x2-x1);
	printf("%.2f %.2f",ans1,ans2);
} 
