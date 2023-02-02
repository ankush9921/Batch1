#include<iostream>
using namespace std;
int main()
{
	int held,attended,per,n;
	cout<<"Enter the Classes Held and Attended :";
	cin>>held>>attended;
	per=(attended*100)/held;
	cout<<per;
	if(per>75)
	{
		cout<<"\n"<<"Student is allow to sit in exam";
	}
	else
	{
	    cout<<"\n"<<"Student is not allow to sit in exam";
	}
	
	return 0;
}
