#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[3][3],arr1[3][3],ans[3][3];
	cout<<"The First Matrix is \n\n";
	for(i=0;i<3;i++)
	{ 
		for(j=0;j<3;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"The Second Matrix is \n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr1[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			ans[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	cout<<"The Addition of two matrix is : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<ans[i][j];
			cout<<"\t";
		}
		
		cout<<"\n";
	}
	
	
	
	return 0;
}
