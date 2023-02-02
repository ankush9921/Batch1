#include<stdio.h>

int main()
{
	int num1=10, num2=20;
	
	
	num1=num1+num2;          //10+20=30
	num2=num1-num2;         //30-20 =10
	num1=num1-num2;         //30-10=20
	
	printf("%d\n%d",num1,num2);
	
	return 0;
}
