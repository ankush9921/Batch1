// Take two int values from user and print greatest among them.

#include<stdio.h>

int main()
{
	int num1,num2,big;
	printf("Enter First Value : ");
	scanf("%d",&num1);
	printf("Enter Second Value : ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		big=num1;
		printf("The first value is big %d",big);
	}
	else
	{
		big=num2;
		printf("The second value is %d",big);
	}
	
	return 0;
	
}
