#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter number for element in arrey : ";
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"The Matrix is : \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<arr[i][j];
			cout<<"\t";
		}
		cout<<"\n\n";
	}
	
	
	return 0;
}
