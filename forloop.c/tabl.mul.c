#include<stdio.h>
int main()
{
	int i,n,mul;
	printf("enter the table:");
	scanf("%d",&n);
	printf("%d",n);
	for(i=0;i<n;i++);
	{
		mul=mul*i;
		printf("%d\n",i);
	}
	printf("%d",mul);
	
	return 0;
}
