//5 A school has following rules for grading system:
//a. Below 25 - F
//b. 25 to 45 - E
//c. 45 to 50 - D
//d. 50 to 60 - C
//e. 60 to 80 - B
//f. Above 80 - A
//Ask user to enter marks and print the corresponding grade.
#include<stdio.h>

int main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	
	if(mark>=0 && mark<25)
    	{
		printf("Grad F");
	    }
	else if(mark>=25 && mark<45)
    	{
  		printf("Grad E");
    	}
	else if(mark>=45 && mark<50)
	    {
	    	printf("Grad D");
		}
	else if(mark>=50 && mark<60)
	   {
	   	printf("Grad C");
	   }
	else if(mark>=60 && mark<80)
	   { 
	   printf("Grad B");
	   }
	else 
	   {
	   	printf("Grad A");
	   }
	return 0;
}


