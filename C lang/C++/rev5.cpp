#include<iostream>
using namespace std;
int main()
{
	int num,rem1,rem2,rem3,rem4,rev;
	cout<<"Enter The Five Digit Number For Reverse : ";
	cin>>num;
	rem1=num%10;
	num=num/10;
	rem2=num%10;
	num=num/10;
	rem3=num%10;
	num=num/10;
	rem4=num%10;
	num=num/10;
	rev=rem1*10000+rem2*1000+rem3*100+rem4*10+num;
	cout<<rev;
	
	return 0;
}
