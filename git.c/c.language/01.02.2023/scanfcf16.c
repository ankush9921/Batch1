#include<stdio.h>

int main()
{
	
	float no1=1.1;
	float no2=2.2;
	float no3=3.3;
	float no4=4.4;
	
	float ans;
	
	ans=no4;
	no3=no3;
	no4=no2;
	no2=no1;
	no1=ans;
	
	printf("%f\n%f\n%f\n%f",ans);
	
	return 0;
}
