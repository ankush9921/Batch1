#include<stdio.h>

int main()
{
	int no1=10;
	int no2=20;
	int no3=40;
	
	int ans;                               //declaration
	
	ans=no3;
	no2=no2;                               //logic
	no3=no1;
	no1=ans;
	
	printf("%d\n%d\n%d",no1,no2,no3);           //o/p
	
	return 0;
}
