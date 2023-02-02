//Write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria: 
//Cost price (in Rs) 			Tax 
//100000 				15 % 
//> 50000 and <= 100000 		10% 
//<= 50000 			5% 

#include<stdio.h>
int main()
{
	float cost_price,tax;

    printf("Enter the cost price of bike: ");
    scanf("%f", &cost_price);

    if (cost_price > 100000)
	{
       tax = cost_price * 0.15;
    } 
	else if (cost_price > 50000 && cost_price <= 100000 )
	{
        tax = cost_price * 0.1;
    } 
	else {
        tax = cost_price * 0.05;
    }

    printf(" tax paid : %f", tax);

	
	return 0;
}
