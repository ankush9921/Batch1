#include<stdio.h>
int main()
{
  //  Write a C program to find the sum of first 10 natural numbers. Go to the editor
//Expected Output :
//The first 10 natural number is :
//1 2 3 4 5 6 7 8 9 10
//The Sum is : 55
    int i,n,sum=0;
    printf("enter the natural number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
    	sum=sum+i;
    	
	}
	    printf("%d",sum);
	    return 0;
    
    
	
	
	
	
}
