#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the value:");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("The greatest number is %d \n",num1);
	}
	else
	{
		printf("The greatest number is %d \n",num2);
	}
	if(num1<num2)
	{
		printf("The smallest number is %d \n",num1);
	}
	else
	{
		printf("The smallest number is %d \n",num2);
	}
	
	return 0;
}
