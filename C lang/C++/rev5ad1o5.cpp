#include<iostream>
using namespace std;
int main()
{
	int num,rem1,add;
	cout<<"Enter 5 digit number : ";
	cin>>num;
	rem1=num%10;
	num=num/10000;
	
	add=rem1+num;
	
	cout<<num<<endl<<rem1<<endl<<"Addition of first and last digit is : "<<add;
	     
	return 0;
}
