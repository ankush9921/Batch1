#include<stdio.h>
int main()
{
	
	int i,n,fact=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d",n);
	fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}