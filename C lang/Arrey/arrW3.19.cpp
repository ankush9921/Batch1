//19. Write a program in C for addition of two Matrices of same size. Go to the editor
//Test Data :
//Input the size of the square matrix (less than 5): 2
//Input elements in the first matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Input elements in the second matrix :
//element - [0],[0] : 5
//element - [0],[1] : 6
//element - [1],[0] : 7
//element - [1],[1] : 8
//Expected Output :
//The First matrix is :
//
//1 2
//3 4
//The Second matrix is :
//
//5 6
//7 8
//The Addition of two matrix is :
//
//6 8
//10 12

#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter number of element in arrey : ";
	cin>>n;
	int arr[n][n],arr1[n][n],ans[n][n];
	cout<<"\nThe First Matrix is : \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<i<<j<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\nThe Second Matrix is : \n\n";
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
			ans[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	cout<<"\nThe Addition of Two Matrix is : \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<ans[i][j];
			cout<<"\t\t";
		}
		cout<<"\n\n";
	}
	
	return 0;
}
