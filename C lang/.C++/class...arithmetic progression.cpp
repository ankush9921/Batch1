#include<iostream>
using namespace std;
class arithmetic{
	public:
		int num1,num2,add,sub,mul,div;
		
		void all()
		{
			add=num1+num2;
		    sub=num1-num2;
		    mul=num1*num2;
		    div=num1/num2;
		    cout<<endl<<"Addition :"<<add<<endl<<"Subtration :"<<sub<<endl<<"Multiplication :"<<mul<<endl<<"Division :"<<div;
		}
};
int main()
{
	arithmetic obj;
	cout<<"Enter 1st Number : ";
	cin>>obj.num1;
	cout<<"Enter 2nd Number : ";
	cin>>obj.num2;
	obj.all();
	return 0;
}
