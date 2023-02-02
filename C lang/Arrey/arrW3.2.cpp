//2. Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
//Test Data :
//Input the number of elements to store in the array :3
//Input 3 number of elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 7
//Expected Output :
//The values store into the array are :
//2 5 7
//The values store into the array in reverse are :
//7 5 2

#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n;
	cout<<"Enter number of element in arrey : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n\nThe Sequence of arrey is : \t";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n\nThe Reverse  of arrey is : \t";
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}

	
	return 0;
}
