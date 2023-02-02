#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,ans=0;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	for(i=0;i<10;i++)
	{
		ans=ans+arr[i];
	}
	cout<<ans;
	return 0;
}
