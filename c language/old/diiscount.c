//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.Ask user for quantity Suppose, one unit will cost 100.Judge and print total cost for user

#include<stdio.h>
int main()
{
int quantity,amount,discount,total;

printf("enter quantity: ");
scanf("%d",&quantity);


amount=quantity*100;
discount=amount*0.1*100;
total=amount-discount;

if(amount>1000)
{
	printf("amount: %d",discount);

}
else
{
	discount=0;
	printf("no discount %d",total);
}

	return 0;
}
