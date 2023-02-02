#include<iostream>
using namespace std;
class two{

	public:
		int num1,num2,num3;
		
		void swap()
		{
			num3=num2;
			num2=num1;
			num1=num3;
			cout<<endl<<num1<<endl<<endl<<num2;
		}
};
int main()
{
	two obj;
	cout<<"Enter 1st Number for swapping :";
	cin>>obj.num1;
	cout<<endl<<"Enter 2nd Number for swapping :";
	cin>>obj.num2;
	obj.swap();
	return 0;
}
