// Prime Number
#include<iostream>
using namespace std;
int main()
{
	int num,i,a=0;
	cout<<"Enter the Number :";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			a++;
		}
	}
	if(a==2)
	{
		cout<<"It is  a prime number .";
	}
	else
	{
		cout<<"Its not a prime number .";
	}
	
	return 0;
}
