#include<stdio.h>
int main()
{
    int salary, years, bonus,total;
     printf("Enter Salary : ");
     scanf("%d",&salary);
     printf ("Enter year : ");
     scanf("%d",&years);
       bonus = salary * 5/100;
       total=salary+bonus;
    if (years > 5)
    {
        printf("u have bonus amount""%d",total);
    }
    else
	{
        printf("don't have bonus amount");
    }
	return 0;
}
