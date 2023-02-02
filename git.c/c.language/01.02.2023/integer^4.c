#include<stdio.h>

int main()
{
	int num1=10, num2=20, tem;
	
	tem=num2;
	num2=num1;
	num1=tem;
	
	printf("%d\n%d",num1,num2);
	
	return 0;
}
