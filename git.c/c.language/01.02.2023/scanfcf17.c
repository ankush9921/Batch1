#include<stdio.h>

int main()
{
	float no1;
	float no2;
	float no3;
	
	float ans;                                          //declaration
	
	printf("enter three value for addition:");          //o/p
	
	scanf("%f\n%f\n%f",&no1,&no2,&no3);                 //input
	
	ans=no1+no2+no3;                                     //logic
	
	printf("%f",ans);                                     //o/p
	
	return 0;
}
