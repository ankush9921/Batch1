#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);   //18
	
	if(age>=18)
	{
		printf("Eligible for vote");
	}
	else
	{
		printf("not Eligible for vote");
	} return 0;
}
