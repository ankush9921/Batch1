//
//10 Write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria: 
//Cost price (in Rs) 			Tax 
//100000 					15 % 
//> 50000 and <= 100000 		10% 
//<= 50000 					5% 




#include<stdio.h>
int main()
{
	int price,tax,total;
	
	printf("Enter the cost price of a bike=");
	scanf("%d",&price);
	
	if(price<=50000)
	{
		tax=(price*5)/100;
	}
	else if(price>50000 && price<=100000)
	{
		tax=price/10;
	}
	else
	{
		tax=(price*15)/100;
	}
	
	printf("\nRoad tax to be paid=%d\n\n",tax);
	
	total=price+tax;
	
	printf("Cost price of a bike=%d",total);
	
	return 0;
}
