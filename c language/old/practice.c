#include<stdio.h>
int main()
{
	int num1=10,num2=20,num3=10,ans;

	num1=num2+num3; //20+10=30
	num2=num1-num3; //30-10=20
	num3=num2-num1; //20-10=10
	
	printf("%d%d%d",num1,num2,num3);
	
	return 0;
}
