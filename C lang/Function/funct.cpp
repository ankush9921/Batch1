#include<iostream>
using namespace std;
void add();
int main()
{
	add();
	return 0;
}

void add()
{
	int a,b,ans;
	cout<<"Enter value for a : ";
	cin>>a;
	cout<<"\nEnter value for b : ";
	cin>>b;
	ans=a+b;
	cout<<"\nThe Addition of two number is : ";
	cout<<ans;
}

