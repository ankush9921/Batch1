//1 A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//
//Ask user for their salary and year of service and print the net bonus amount.


#include<stdio.h>
int main()
{
	int salary,service,bonus,total;
	
	printf("Enter the salary of employee =");
	scanf("%d",&salary);
	printf("Enter the Enter the service of employee =");
	scanf("%d",&service);
	
	if(service>5)
	{
		bonus=(5*salary)/100;
		printf("give 5 percent bonus=%d\n",bonus);
	}
	else
	{
		printf("not give 5 percent bonus\n");
		bonus=0;
	}
	
	total=salary+bonus;
	
	printf("Total salary=%d",total);
	
	
	return 0;
}
