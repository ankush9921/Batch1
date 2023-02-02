#include<iostream>
using namespace std;
int main()
{
	int a,b,c,swap;
	cout<<"Enter two values for swap :";
	cin>>a>>b;
	c=b;
	b=a;
	a=c;
	cout<<a<<"\n"<<b;
	
	return 0;
}
