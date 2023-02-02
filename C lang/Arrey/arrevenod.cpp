#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,ans=0,ans1=0;
	for(i=0;i<20;i++)
	{
		cout<<"Enter Number : ";
		cin>>arr[i];
	}
	for(i=0;i<20;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<endl<<"The even no is "<<arr[i]<<endl;
			ans=ans+arr[i];
		}
		else
		{
			cout<<endl<<"The odd no is "<<arr[i]<<endl;
			ans1=ans1+arr[i];
		}
	}
	cout<<"The addition of even no is  "<<ans<<endl;
	cout<<"The addition of even no is  "<<ans1;
	
	
	return 0;
}
