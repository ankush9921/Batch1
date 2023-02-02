// The sum of natural numbers
#include<iostream>
using namespace std;
int main()
{
	int i,ans=0,num;
	cout<<"Enter the Number : ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		cout<<i<<endl;
	}
    for(i=1;i<=num;i++)
    {
    	ans=ans+i;
	}
	cout<<"The Sum of all number is : "<<endl;
	cout<<ans;
	
	
	return 0;
}
