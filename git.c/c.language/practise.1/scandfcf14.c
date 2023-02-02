#include<stdio.h>

int main()
{
	
	float no1=10.2;
	float no2=2.5;
	
	float ans;
	
	ans=no2;
	no2=no1;
	no1=ans;
	
	printf("%f\n%f",no1,no2);
	
	return 0;
}
