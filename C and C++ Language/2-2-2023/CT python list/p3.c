//3 Take two int values from user and print greatest among them.


#include<stdio.h>
int main()
{
	int n1,n2;
	
	printf("Enter the two number=");
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2)
	{
		printf("%d is greatest number.",n1);
	}
	else if(n1==n2)
	{
		printf("both are same number");
	}
	else
	{
		printf("%d is greatest number",n2);
	}
	
	return 0;
}
