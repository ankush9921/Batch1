//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.
#include<stdio.h>
int main()
{     int salary,year,bonus,total;
      
      printf("enter the salary: ");
      scanf("%d",&salary);
      printf(" enter the year: ");
      scanf("%d",&year);//bonus=salary*0.05
      
      bonus=salary*0.05;
      total=bonus+salary;
      
      if(year>5)
      {
      	printf("eligible for bonus %d",total);
	  }
      else
	{
		printf(" not for eligible ");
	}
	
	
	return 0;
}
