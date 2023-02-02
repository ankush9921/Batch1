//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user.
#include<stdio.h>
int main()
{
	int quantity,price,dis,ta;
	printf("Enter the quantity: ");
	scanf("%d",&quantity);
	price=quantity*100;
	if(quantity>1000)
	{
		dis=price*0.10;
	}
	else
	{
		dis=0;
	}
	ta=price+dis;
	printf("%d",ta);
	
	
	return 0;
}
