// Sum of all digits 
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,rem,sum=0;
	cout<<"Enter Number for Sum of their digits :";
	cin>>num1;
	num2=num1;
	while(num1>0)
	{
		rem=num1%10;
		num1=num1/10;
		sum=sum+rem;
	}
	cout<<"The sum of "<<num2<<" is :"<<sum;
	
	return 0;
}
