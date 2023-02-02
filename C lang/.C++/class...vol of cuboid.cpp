#include<iostream>
using namespace std;
class vol{

	public:
		float l,b,h;
		
		void cuboid()
		{
			cout<<endl<<"Volume of Cuboid is :"<<l*b*h;
		}
};
int main()
{
	vol obj;
	cout<<"Enter Length of a Cuboid :";
	cin>>obj.l;
	cout<<endl<<"Enter Breadth of a Cuboid :";
	cin>>obj.b;
	cout<<endl<<"Enter Height of a Cuboid :";
	cin>>obj.h;
	obj.cuboid();
	return 0;
}
