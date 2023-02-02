#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the Age of A :\n";
	cin>>a;
	cout<<"Enter the Age of B :\n";
	cin>>b;
	cout<<"Enter the Age of C :\n";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"A is oldest";
	}
	else if(b>a && b>c)
	{
		cout<<"B is oldest";
	}
    else
	{
		cout<<"C is oldest";
	}
	if(a<b && a<c)
	{
		cout<<"\n"<<"A is youngest";
	}
	else if(b<a && b<c)
	{
		cout<<"\n"<<"B is youngest";
	}
	else
	{
		cout<<"\n"<<"C is youngest";
	}
	return 0;
}
