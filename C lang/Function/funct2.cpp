#include<iostream>
using namespace std;
int add(int x,int y);
int main()
{
	int a,b,c,ans1,ans2;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"\nEnter value of b : ";
	cin>>b;
	cout<<"\nEnter value of c : ";
	cin>>c;
	ans1=add(a,b);
	ans2=add(ans1,c);
	cout<<"\nThe addition of a and b is : "<<ans1;
	cout<<"\n\nThe addition of a,b and c is : "<<ans2;
	return 0;
}
int add(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;
}


