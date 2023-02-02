//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<stdio.h>
int main()
{
    int length;
	int breadth;
	
	
	printf("Enter the value of length: ");
	scanf("%d",&length);
	printf("Enter the value of length: ");
	scanf("%d",&breadth);
	
	if(length==breadth)
	{
		printf("It is the square");
	}
	else
	{
		printf("it is not square");
	}
	
	
	
}
