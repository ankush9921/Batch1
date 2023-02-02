// Sorting of arrey 
#include<iostream>
using namespace std;
int main()
{
	int i,j,n,tem;
	cout<<"Enter the Elements in arrey : ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tem=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tem;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
