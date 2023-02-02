//1. Write a program in C to store elements in an array and print it.
//Test Data :
//Input 10 elements in the array :
//element - 0 : 1
//element - 1 : 1
//element - 2 : 2
//.......
//Expected Output :
//Elements in array are: 1 2 3 4 5 6 7 8 9 10


#include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
