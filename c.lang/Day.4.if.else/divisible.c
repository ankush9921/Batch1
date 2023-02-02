//2. check a number whether the number divisible by 5,11 and 15
//
//input:55
//
//output:
//
//divisible by 5 
//divisible by 11
//not divisible by 15
#include<stdio.h>
int main()
{    
    int num;
    printf("enter the num: ");
    scanf("%d",&num);
    
    if(num%5==0 && num%11==0)
    {
    	printf("%d the 5num is divisible ",num);
	}
    else
    {
    printf("%d the 5num is not divisible ",num);	
	}
    
	
	
	
	
	
	return 0;
}
