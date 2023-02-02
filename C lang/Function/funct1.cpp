#include<iostream>
using namespace std;
int add(int x,int y);
int main()
{
	int a,b,ans1;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"\nEnter the value of b : ";
	cin>>b;
	ans1=add(a,b);
	cout<<"\nThe addition of two number is : "<<ans1;
	return 0;
}
int add(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;	
}
