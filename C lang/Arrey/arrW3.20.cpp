//20. Write a program in C for subtraction of two Matrices. Go to the editor
//Test Data :
//Input the size of the square matrix (less than 5): 2
//Input elements in the first matrix :
//element - [0],[0] : 5
//element - [0],[1] : 6
//element - [1],[0] : 7
//element - [1],[1] : 8
//Input elements in the second matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Expected Output :
//The First matrix is :
//
//5 6
//7 8
//The Second matrix is :
//
//1 2
//3 4
//The Subtraction of two matrix is :
//
//4 4
//4 4


#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter Number of elements in arrey : ";
	cin>>n;
	int arr[n][n],arr1[n][n],ans[n][n];
	cout<<"\nInput the element of first matrix : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\nInput the element of second matrix : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr1[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ans[i][j]=arr[i][j]-arr1[i][j];
		}
	}
	cout<<"\nThe Subtraction of matrix is : \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<ans[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
	
	return 0;
}
