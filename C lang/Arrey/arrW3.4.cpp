//4. Write a program in C to copy the elements of one array into another array. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 15
//element - 1 : 10
//element - 2 : 12
//Expected Output :
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter number of element in arrey : ";
	cin>>n;
	
	int arr[n],arr1[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nFirst     arrey : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n\nDublicate arrey : ";
	for(i=0;i<n;i++)
	{
		arr1[i]=arr[i];
		cout<<arr1[i]<<"\t";
	}
	
	return 0;
}
