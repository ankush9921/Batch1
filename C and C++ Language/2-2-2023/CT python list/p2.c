//2 Take values of length and breadth of a rectangle from user and check if it is square or not.



#include<stdio.h>
int main()
{
	int l,b;
	
	printf("Enter the length and breadth=");
	scanf("%d%d",&l,&b);
	
	if(l==b)
	{
		printf("It is a square");
	}
	else
	{
		printf("is not a square");
	}
		
	return 0;
}
