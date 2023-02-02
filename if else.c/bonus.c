#include<stdio.h>
int main()
{
	int salary,year,bonus,total; 
	printf("Enter  the salary : ");
	scanf("%d",&salary);
	printf("\nEnter  the service year: ");
	scanf("%d",&year);
	bonus=salary*0.05;
	total=salary+bonus;
	
	if(year>5)
	{
		printf("\nThe employ is eligible for bonus and the net salary amount is %d ",total);
	}
	else
	{
		printf("\nThe employ is not eligible for bonus and the salary amount is %d ",salary);
	}
	
	return 0;
	
}
