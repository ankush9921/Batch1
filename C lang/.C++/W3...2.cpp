// addition of 10 natural nnumbers
#include<iostream>
using namespace std;
int main()
{
	int i,ans=0;
	for(i=1;i<=10;i++)
	{
		cin>>i;
	}
	cout<<"The first 10 natural number is : "<<endl;
	for(i=0;i<=10;i++)
	{
		cout<<i<<endl;
	}
	for(i=0;i<=10;i++)
	{
		ans=ans+i;
	}
	cout<<"The Sum of 10 natural number is : "<<endl;
	cout<<ans;
	
	return 0;
}
