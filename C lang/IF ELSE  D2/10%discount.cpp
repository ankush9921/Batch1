//10% discount in shop
#include<iostream>
using namespace std;
int main()
{
	int units,cost,total,offprice;
	cout<<"Enter how many units you have purchased : ";
	cin>>units;
	total=100*units;
	cost=total*0.10;
	offprice=total-cost;
	if(units>10)
	{
		cout<<"\nTotal cost of customer is : "<<offprice;
	}
	else
	{
		cout<<"\nCustomer is not eligible for discount .\n";
		cout<<"\nTotal cost of customer is : "<<total;
	}
	
	return 0;
}
