#include<iostream>
using namespace std;

class arithmetic{
	
	public:
		
	int num1,num2;
	
	void add()
	{
		cout<<"Addition :"<<num1+num2;
	}
	void sub()
	{
		cout<<endl<<"Subtraction :"<<num1-num2;
	}
	void mul()
	{
		cout<<endl<<"Multiplication :"<<num1*num2;
	}
	void div()
	{
		cout<<endl<<"Division :"<<num1/num2;
	}
	
};
int main()
{
	arithmetic obj;
	cout<<"Enter Numbers :"<<endl;
	cin>>obj.num1>>obj.num2;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	
	return 0;
}
