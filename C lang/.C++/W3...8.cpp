// Find The Greatest Common Divisor GCD
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,gcd,i;
	cout<<"Enter 1st Number for Greatest Common Divisor :";
	cin>>num1;
	cout<<"Enter 2nd Number for Greatest Common Divisor :";
	cin>>num2;
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1 %i ==0 && num2 %i==0)
		{
			gcd=i;
		}
	}
	cout<<"The Greatest Common Divisor is :"<<gcd;
	
	return 0;
}
