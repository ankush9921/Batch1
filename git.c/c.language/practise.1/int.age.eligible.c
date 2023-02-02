#include<stdio.h>

int main()
{
	int age;
	printf("enter your age:\n");
	scanf("%d",&age);
	if(age>18)
	{
		printf("Eligible for vote");
	}
	else
	{
		printf("not Eligible for vote");
	}

	return   0;
}
