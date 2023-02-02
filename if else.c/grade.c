#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks>=80)
	{
		printf("the grade is A");
	}
 	else if(marks>60 && marks<=80)
	{
	    printf("the grade is B");	
	}
    else if(marks>50 && marks<=60)
    {
        printf("the grade is  C");	
	}
	else if(marks>45 && marks<=50)
	{
      	printf("the grade is D");	
	}
	else if(marks>25 && marks<=45)
	{
	   printf("the grade is E");	
	}
	else
	{
		printf("the grade is f");
	}
	return 0;
	
}
