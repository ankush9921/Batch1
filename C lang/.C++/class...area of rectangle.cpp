#include<iostream>
using namespace std;
class area{

	public:
		int l,b;
		
		void rect()
		{
			cout<<endl<<"Area of a rectangle is :"<<l*b;
		}
};
int main()
{
	area obj;
	cout<<"Enter Length of a rectangle :";
	cin>>obj.l;
	cout<<endl<<"Enter Breadth of a rectangle :";
	cin>>obj.b;
	obj.rect();
	return 0;
}
