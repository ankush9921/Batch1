//1. Write a C program to accept two integers and check whether they are equal or not. Go to the editor
//Test Data : 15 15
//Expected Output :
//Number1 and Number2 are equal



#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter the 2 no: ");
	scanf("%d%d",&num1,&num2);
	
	if(num1==num2)
	{
		printf("Number1 and Number2 are equal");
	}
	else
	{
		printf("Number1 and Number2 are not equal");
	}
	
	
	
	return 0;
}
