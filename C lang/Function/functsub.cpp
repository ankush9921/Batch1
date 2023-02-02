#include<iostream>
using namespace std;
int sub(int x,int y);
int main()
{
	int a,b,ans1;
	cout<<"Enter the value of a for subtraction : ";
	cin>>a;
	cout<<"\nEnter the value of b for subtraction : ";
	cin>>b;
	ans1=sub(a,b);
	cout<<"\nThe answer is : "<<ans1;
	return 0;
}
int sub(int x,int y)
{
	int ans;
	ans=x-y;
	return ans;
}
