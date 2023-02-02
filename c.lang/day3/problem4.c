//1 A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.
#include<stdio.h>
 int main()
 {
 	 int salary,year,bonus,total;
 	 printf("Enter salary: ");
 	 scanf("%d",&salary);
 	 printf("enter the years of service: ");
 	 scanf("%d",&year);
    bonus=.05*salary;
 	 total=bonus+salary; 
 	 if(year>5){
 	 	printf("more than 5 years""%d",total);
 	  	
	   }else
	   {
	   	printf("less than 5 years""%d",total);
	   }
 	  
 	
 	return 0;
 }
