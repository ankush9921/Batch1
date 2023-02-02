#include<iostream>
using namespace std;
int main()
{
	float unit,price,meter,tax,total;
	cout<<"Enter Units :";
	cin>>unit;
	if(unit>0&&unit<=100)
	{
		price=unit*3.5;
	}
	else if(unit>100&&unit<=200)
	{
		price=unit*5;
	}
	else if(unit>200&&unit<=300)
	{
		price=unit*10;
	}
	else
	{
		price=unit*15;
	}
	if(price<=1000)
	{
		tax=price*0.09;
		meter=price*0.1;
	}
	else
	{
		tax=price*0.18;
		meter=price*0.2;
	}
	total=price+tax+meter;
	cout<<total;
	
	return 0;
}
