//Write a C program to check whether a given number is even or odd. Go to the editor
//Test Data : 15
//Expected Output :
//15 is an odd integer

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number=");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is an even integer",num);
	}
	else
	{
		printf("%d is an odd integer",num);
	}
	return 0;
}
