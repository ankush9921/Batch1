//4 A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
//Ask user for quantity
//Suppose, one unit will cost 100.
//Judge and print total cost for user.


#include<stdio.h>
#define one_unit 100

int main()

{
	int quant,cost,discount,total;
	
	printf("Enter the purchased quantity=");
	scanf("%d",&quant);
	
	cost=quant*one_unit;
	
	if(cost>=1000)
	{	
		discount=(10*cost)/100;
		printf("give discount=%d\n",discount);
	}
	else
	{
		printf("you do not give discount\n");
		discount=0;
	}
	
	total=cost-discount;
	
	printf("total cost=%d",total);
	
	return 0;
}
