#include<stdio.h>
int main()
{
    int salary,year,bonus,total;
    printf("enter the salary: ");	
	scanf("%d",&salary);
	printf("enter the year: ");
	scanf("%d",&year);
	
	bonus=0.05*salary;
	total=bonus+salary;
	if(year>5)
	{
		printf("net bonus amount %d",total);
	}
	else
	{
		printf("net bonus amount");
	}
	return 0;
}
