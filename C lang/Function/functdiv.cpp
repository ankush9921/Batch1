#include<iostream>
using namespace std;
int div(int x,int y);
int main()
{
	int a,b,ans1;
	Big_:
	cout<<"\nEnter the value of a for division : ";
	cin>>a;
	cout<<"\nEnter the value of b for division : ";
	cin>>b;
	
	if(a<b)
	{
		goto Big_;
	}
	ans1=div(a,b);
	cout<<"\nThe division of two number is : "<<ans1;
	return 0;
}
int div(int x,int y)
{
	int ans;
	ans=x/y;
	return ans;
}
