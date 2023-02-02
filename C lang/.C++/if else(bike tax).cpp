#include<iostream>
using namespace std;
int main()
{
	int price,tax,total;
	cout<<"Enter the price of bike :";
	cin>>price;
	if(price>100000)
	{
		tax=price*0.15;
	}
	else if(price>50000&&price<=100000)
	{
		tax=price*0.10;
	}
	else
	{
		tax=price*0.05;
	}
	
	total=price+tax;
	cout<<tax<<"\n"<<total;
	return 0;
}
