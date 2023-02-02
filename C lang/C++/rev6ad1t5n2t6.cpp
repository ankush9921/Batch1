#include<iostream>
using namespace std;
int main()
{
	int num,rem1,rem2,rem3,rem4,rem5,rev,add1,add2;
	cout<<"Enter The Six Digit Number For Reverse  : ";
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
	cout<<"\nThe Reverse of Six digit is             : ";
	cout<<rev<<endl;
	add1=num+rem4+rem2;
	add2=rem5+rem3+rem1;
	cout<<"\nThe First three alternate no. is        : "<<num<<"\t"<<rem4<<"\t"<<rem2<<"\t"<<endl;
	cout<<"\nThe addition of first alternate no. is  : "<<add1<<endl;
	cout<<"\nThe Second three alternate no. is       : "<<rem5<<"\t"<<rem3<<"\t"<<rem1<<"\t"<<endl;
	cout<<"\nThe addition of second alternate no. is : "<<add2<<endl;

	
	return 0;


}
