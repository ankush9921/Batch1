#include<iostream>
using namespace std;
class three{

	public:
		int num1,rem1,rem2,rev;
		
		void revs()
		{
			rem1=num1%10;
			num1=num1/10;
			rem2=num1%10;
			num1=num1/10;
			rev=rem1*100+rem2*10+num1;
			cout<<endl<<rev;
		}
};
int main()
{
	three obj;
	cout<<"Enter Number :";
	cin>>obj.num1;
	obj.revs();
	return 0;
}
