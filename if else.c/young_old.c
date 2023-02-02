#include<stdio.h>
int main()
{
	int age1,age2,age3;
	printf("enter the student: ");
	scanf("%d%d%d ",&age1,&age2,&age3); 
	if(age1<age2 && age1<age3)
	{
		printf("the youngest student");
	}
	else
	{
	    	printf("the 0ldest student");  	
	}  
	   return 0;
	
}

