#include<stdio.h>
int main()

{
	// absolute number
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0)
	n=n*(-1);
	{
		printf("the absolute value:%d",n);
	}
	return 0;
	
}
