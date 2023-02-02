#include<stdio.h>//7 Write a program to print absolute value of a number entered by user. E.g.- //input:1       output:1
                                                                                                //input:-1      output:1
int main()
{
	int num1;
	printf("Enter a number:");
	scanf("%d",&num1);   //-10
	
	if(num1>0)
	{
		printf("positive");
	}
	else
	{
		printf("negetive");
	}return 0;
}
