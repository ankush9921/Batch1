#include<stdio.h>

int main()
{
	
	int no1=10;
	int no2=20;
	
	int ans;
	
	ans=no1;
	no2=no1;
	no1=ans;
	
	printf("%d\n%d",no1,no2);
	
	return 0;
}
