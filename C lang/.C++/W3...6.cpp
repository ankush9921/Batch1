// Count of prime number between 1 to 100 .
#include<iostream>
using namespace std;
int main()
{
	int num,num1,i,a=0,count=0;
	cout<<"Enter the 1st Number :";
	cin>>num;
	cout<<"Enter the last Number :";
	cin>>num1;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			a++;
		}
	}
	if(a==2)
	{
		count++;
	}
	cout<<count;

	
	return 0;
}
