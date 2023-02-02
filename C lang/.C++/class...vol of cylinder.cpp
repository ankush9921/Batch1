#include<iostream>
using namespace std;
class vol{

	public:
		float pi=3.1452,r,h;
		
		void cyldr()
		{
			cout<<endl<<"Volume of Cylinder is :"<<pi*r*r*h;
		}
};
int main()
{
	vol obj;
	cout<<"Enter Radius of Cylinder :";
	cin>>obj.r;
	cout<<endl<<"Enter Height of Cylinder :";
	cin>>obj.h;
	obj.cyldr();
	return 0;
}
