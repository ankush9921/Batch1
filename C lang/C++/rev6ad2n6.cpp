#include<iostream>
using namespace std;
int main()
{
	int num,rem1,rem2,rem3,rem4,rem5,rev,add;
	cout<<"Enter The Six Digit Number For Reverse : ";
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
	rev=rem1*100000+rem2*10000+rem3*1000+rem4*100+rem5*10+num;
	cout<<"\nThe Reverse of Six digit is : ";
	cout<<rev<<endl;
	cout<<"\nThe 2nd No. is : "<<rem5<<endl<<"\nThe last No. is : "<<rem1<<endl;
	add=rem5+rem1;
	cout<<"\nAddition of second and last digit is : "<<add;
	

	
	return 0;
}
