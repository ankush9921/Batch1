//6 Take input of age of 3 people by user and determine oldest and youngest among them.



#include<stdio.h>
int main()
{
	int n1,n2,n3;
	
	printf("Enter the age of 1st 2nd and 3rd person=");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("p1 oldest among them.\n");
	}
	else if(n2>n1 && n2>n3)
	{
		printf("p2 oldest among them.\n");
	}
	else
	{
		printf("p3 oldest among them.\n");
	}
	
	if(n1<n2 && n1<n3)
	{
		printf("p1 youngest among them.");
	}
	else if(n2<n1 && n2<n3)
	{
		printf("p2 youngest among them.");
	}
	else
	{
		printf("p3 youngest among them.");
	}
	
	
	
	
	return 0;
}
