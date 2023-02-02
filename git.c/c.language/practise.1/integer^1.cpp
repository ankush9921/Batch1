#include<stdio.h>

int main()
{
	int num1=2, num2=5;
	
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	
	printf("%d\n%d",num1,num2);
	
	return 0;
}
