#include<stdio.h>
int main()
{
	int held,attendance;
	printf("enter the student: ");
	scanf("%d%d",&held,&attendance);
	held/attendance*100;
	if(attendance<=0.75)
	{
		printf("student are allowed to sit");
	}
	else
	{
	    	printf("student are not allowed to sit");  	
	}
	   return 0;
	
}

