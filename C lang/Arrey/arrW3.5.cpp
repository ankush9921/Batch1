#include<iostream>
using namespace std;
int main()
{
	int i,n,dn;
	cout<<"Enter number of element in arrey : ";
	cin>>n;
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
//			arr1[i]=arr[i];
			//arr1[i]=arr[i];
			cout<<"The duplicate number in arrey is : "<<arr[i]<<"\n";
		}
	}
	cout<<"\n";
//	for(i=0;i<n;i++)
//	{
//		cout<<dn<<"\t";
//	}
	
	return 0;
}
