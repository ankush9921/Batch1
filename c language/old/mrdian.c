//Write a Python program to find the median of three values.
//Expected Output:
//Input first number: 15 
//Input second number: 26 
//Input third number: 29 
//The median is 26.0

#include<stdio.h>
int main()
{
    int a,b,c,median;
     printf("Enter first no.: ");
     scanf("%d",&a);
     printf ("Enter second no. : ");
     scanf("%d",&b);
     printf ("Enter third no. : ");
     scanf("%d",&c);
    
   if (a>b)
    {
    	if (a<c)
        {
        	median=a;
		}
    else if (b>c)
       {
       	 median=b;
	   }
    else
       {
       	 median=c;
	  }  
	   }
   else
    {
    	if (a>c)
       {
       	 median=a;
	   }
    else if (b<c)
       {
       	 median=b;
	   }
    else        
       {
       	 median=c;
	   }
	}
        
        print("median is %d" ,median);       
	return 0;
}

