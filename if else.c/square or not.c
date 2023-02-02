#include<stdio.h>
int main()
{
	int l,b,area;
	printf("enter the number:");
	scanf("%d%d,",&l,&b);
	area=l*b;
	if(l==b)
	{
		printf("it is a square");
	}
	else
	{
		printf("it is not a square:");
		
	}
	return 0;
}
