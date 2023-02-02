#include<stdio.h>
int main()
{
	int l,b ,area,perimeter;
	printf("enter the number:");
	scanf("%d%d",&l,&b);
	int a=l*b;
	int  p=2*(l*b);
	if(a>=p)
	{
		printf("greater than");
	}
	if(a<=p)
	{
		printf("smaller than");
	}
	if(a==p)
	{
		printf("equal to");
	}
	return 0;
	
}
