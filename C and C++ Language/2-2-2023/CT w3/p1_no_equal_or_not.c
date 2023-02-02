//1. Write a C program to accept two integers and check whether they are equal or not. Go to the editor
//Test Data : 15 15
//Expected Output :
//Number1 and Number2 are equal


#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("Enter the two number=");
	scanf("%d%d",&n1,&n2);
	
	if(n1==n2)
	{
		printf("%d and %d are equal.",n1,n2);
	}
	else    
	{
		printf("%d and %d are not equal.",n1,n2);
	}
	
	return 0;
	
}
