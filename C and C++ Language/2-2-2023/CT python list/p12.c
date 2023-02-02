//12 Write a Python program to find the median of three values.
//Expected Output:
//Input first number: 15 
//Input second number: 26 
//Input third number: 29 
//The median is 26.0


#include<stdio.h>
int main()
{
	
	
	
	int n1,n2,n3;
	
	printf("Enter the first number: ");
	scanf("%d",&n1);
	printf("Enter the second number: ");
	scanf("%d",&n2);
	printf("Enter the third number: ");
	scanf("%d",&n3);
	
	if((n1<n2 && n1>n3) || (n1>n2 && n1<n3))
	{
		printf("The median is=%d",n1);
	}
	else	if((n2<n1 && n2>n3) || (n2>n1 && n2<n3))
	{
		printf("The median is=%d",n2);
	}
	else
	{
		printf("The median is=%d",n3);
	}
	
	return 0;
}
