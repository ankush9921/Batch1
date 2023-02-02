//2. check a number whether the number divisible by 5,11 and 15
//
//input:55
//
//output:
//
//divisible by 5 
//divisible by 11
//not divisible by 15


#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number=");
	scanf("%d",&num);
	
	if(num%5==0)
	{
		printf("Divisible by 5\n ");
	}
	else
	{
		printf("Not Divisible by 5 \n");
	}
	
	if(num%11==0)
	{
		printf("Divisible by 11 \n");
	}
	else
	{
		printf("Not Divisible by 11 \n");
	}
	
	if(num%15==0)
	{
		printf("Divisible by 15 \n");
	}
	else
	{
		printf("Not Divisible by 15 \n");
	}
	
	return 0;
}



