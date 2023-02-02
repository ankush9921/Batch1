#include<iostream>
using namespace std;
class area{

	public:
		int s;
		
		void sqre()
		{
			cout<<endl<<"Area of a Square is :"<<s*s;
		}
};
int main()
{
	area obj;
	cout<<"Enter Side of a Square :";
	cin>>obj.s;
	obj.sqre();
	return 0;
}
