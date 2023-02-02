#include<stdio.h>
int main()
{
	int l,b;
	printf("enter the values length and breadth:");
	scanf("%d%d",&l,&b);
	if(l==b)
	{
		printf("it is a square");
	}
	else
	{
		printf("it is not a square");
	}
	return 0;
}
