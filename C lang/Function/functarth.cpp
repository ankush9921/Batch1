#include<iostream>
using namespace std;
int add(int ,int );
int sub(int ,int );
int mul(int ,int );
int div(int ,int );

int main()
{
	int a,b,add1,sub1,mul1,div1;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"\nEnter the value of b : ";
	cin>>b;
	add1=add(a,b);
	cout<<"\nThe addition of two numbe is : "<<add1;
	Sub_:
	cout<<"\n\nEnter the value of a : ";
	cin>>a;
	cout<<"\nEnter the value of b : ";
	cin>>b;
	if(a<b)
	{
		goto Sub_;
	}
	sub1=sub(a,b);
	cout<<"\nThe Subtraction of two number is : "<<sub1;
	
	cout<<"\n\nEnter the value of a : ";
	cin>>a;
	cout<<"\nEnter the value of b : ";
	cin>>b;
	mul1=mul(a,b);
	cout<<"\nThe Multiplication of two no is : "<<mul1;
	Div_:
	cout<<"\n\nEnter the value of a : ";
	cin>>a;
	cout<<"\nEnter the value of b : ";
	cin>>b;
	if(a<b)
	{
		goto Div_;
	}
	div1=div(a,b);
	cout<<"\nThe Division of two no is : "<<div1;
	
	
	
	return 0;
}

int add(int x,int y)
{
	int ans;
	ans=x+y;
	return ans;
}
int sub(int x,int y)
{
	int ans;
	ans=x-y;
	return ans;
}
int mul(int x,int y)
{
	int ans;
	ans=x*y;
	return ans;
}
int div(int x,int y)
{
	int ans;
	ans=x/y;
	return ans;
}

