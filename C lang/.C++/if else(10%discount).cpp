#include<iostream>
using namespace std;
int main()
{
	int cost=100,quantity,total,offprice;
	cout<<"Enter the Quantity :";
	cin>>quantity;
	total=cost*quantity;
	offprice=total-total/10;
	if(total>1000)
	{
		cout<<offprice;
	}
	else
	{
		cout<<total;
	}
	
	
	
	return 0;
}
