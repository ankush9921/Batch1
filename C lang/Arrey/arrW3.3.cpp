//3. Write a program in C to find the sum of all elements of the array. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 8
//Expected Output :
//Sum of all elements stored in the array is : 15


#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n,ans=0;
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
	for(i=0;i<n;i++)
	{
		ans=ans+arr[i];
	}
	cout<<"\n\nSum of all elements in the array is : "<<ans;
	
	return 0;
}
