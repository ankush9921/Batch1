// Factorial of Number
#include<iostream>
using namespace std;
int main()
{
	int num,i,ans=1;
	cout<<"Enter Number for Factorial :";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		ans=ans*i;
	}
	cout<<ans;
	
	return 0;
}
