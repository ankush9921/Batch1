#include<stdio.h>            //  The following program will ask the user to input 10 integers and find the sum.

   int main() 
{ 
//int z;
//int x, sum=0, inpn;      //initialization
//
//for(x=1; x<10; ++x)      //Ask user 10 times(i.e.x takes 10 integers
//{
//printf("Enter %d: ",x); 
//scanf("%d",&inpn); 
//sum = sum + inpn;           // Accumulate the next value 
//} 
//printf("Total Sum of 10 numbers = %d\n",sum); 

int o, k, sum=0, input;
for(o=1; o<=20; ++o)
   {printf("enter%d:",o);
	scanf("%d",&input);
	sum=sum+input;
   }  printf("%d",sum);

} 
   
