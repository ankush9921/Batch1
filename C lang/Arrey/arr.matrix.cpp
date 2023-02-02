#include<iostream>
using namespace std;
int main()
{
	int i,j,arr[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"The Matrix is : \n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arr[i][j];
			cout<<"\t";
		}
		
		cout<<"\n";
	}
	
	
	
	return 0;
}
