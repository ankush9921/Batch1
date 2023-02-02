#include<stdio.h>
int main()
{
	// Write a C program to accept two integers and check whether they are equal or not. Go to the editor
    //Test Data : 15 15
    //Expected Output :Number1 and Number2 are equal
    
    int num1,num2;
    printf("enter the value:");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
    	printf("it is a equal value");
	}
	else
	{
		printf("it is not a equal value");
	}
	return 0;
	
}  
