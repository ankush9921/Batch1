//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user.
#include<stdio.h>

int main ()
{
	int q, mony, price, discount, offer, ta;
	printf("Enter the Quantity");
	scanf("%d",&q);
	printf("Enter price of each mony");
	scanf("%d",&mony);
	printf("Enter the price for setting offer");
	scanf("%d",&offer);
	price=q*100;
	
	if(price>1000)
	{
		discount=price*0.10;
	}
	else
	{
		discount=0;
	}
	ta-price-discount;
	printf("Enter amont %d\n",discount);
	
	return 0;
}
