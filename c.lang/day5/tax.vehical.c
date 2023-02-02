//10 Write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria: 
//Cost price (in Rs) 			Tax 
//100000 				15 % 
//> 50000 and <= 100000 		10% 
//<= 50000 			5% 
#include<stdio.h>
int main()
{  
   int amount,tax,ta;
   printf("enter the price of vehical: ");
   scanf("%d",&amount);
   
   if(amount>100000)
   {
   	    tax=amount*0.15;
   }
    else if(amount>50000 || amount<=100000 )
	{
		tax=amount*0.10;	
	}	 
	else
	{
		tax=amount*0.05;
	}
	  ta=amount+tax;
	  printf("%d",ta);	
	
	return 0;
}
