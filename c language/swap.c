#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the swap two number:");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("%d\n%d",a,b);
	return 0;
}
