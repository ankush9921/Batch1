#include<iostream>
using namespace std;
int main()
{
	int amount,tax,price;
	cout<<"Enter Price of vehicle : ";
	cin>>price;
	if(price>=100000)
	{
		tax=price*0.15;
	}
	else if(price>=50000 || price<100000)
	{
		tax=price*0.10;
	}
	else
	{
		tax=price*0.05;
	}
	amount=price+tax;
	cout<<"\nThe tax on amount of vehicle is . "<<tax<<endl;
	cout<<"\nThe total amount of vehicle is . "<<amount;
	
	
	return 0;
}
