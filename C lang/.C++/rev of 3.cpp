#include<iostream>
using namespace std;
int main()
{
	int num1,rem1,rem2,rev;
	cout<<"Enter Three digit number:";
	cin>>num1;
	rem1=num1%10;
	num1=num1/10;
	rem2=num1%10;
	num1=num1/10;
	
	rev=rem1*100+rem2*10+num1;
	cout<<rev;
	
	return 0;
}
