#include<iostream>
using namespace std;
class vol{

	public:
		float pi=3.1452,r,h;
		
		void cone()
		{
			cout<<endl<<"Volume of Cone is :"<<(pi*r*r*h)/3;
		}
};
int main()
{
	vol obj;
	cout<<"Enter Radius of Cone :";
	cin>>obj.r;
	cout<<endl<<"Enter Height of a Cone :";
	cin>>obj.h;
	obj.cone();
	return 0;
}
