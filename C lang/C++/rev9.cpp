#include<iostream>
using namespace std;
int main()
{
	int num,rem1,rem2,rem3,rem4,rem5,rem6,rem7,rem8,rev;
	cout<<"Enter The Nine Digit Number For Reverse : ";
	cin>>num;
	rem1=num%10;
	num=num/10;
	rem2=num%10;
	num=num/10;
	rem3=num%10;
	num=num/10;
	rem4=num%10;
	num=num/10;
	rem5=num%10;
	num=num/10;
	rem6=num%10;
	num=num/10;
	rem7=num%10;
	num=num/10;
	rem8=num%10;
	num=num/10;
	rev=rem1*100000000+rem2*10000000+rem3*1000000+rem4*100000+rem5*10000+rem6*1000+rem7*100+rem8*10+num;
	cout<<rev;
	
	return 0;
}
