#include<stdio.h>
int main()
{
	// leap year
    
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    if(n%4==0)
    {
    	printf("it is leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
	return 0;
	
}  
