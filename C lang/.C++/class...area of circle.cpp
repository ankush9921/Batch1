#include<iostream>
using namespace std;
class area{

	public:
		float pi=3.1452,r;
		
		void circle()
		{
			cout<<"Area of a Circle is :"<<pi*r*r;
		}
};
int main()
{
	area obj;
	cout<<"Enter Radius of circle :";
	cin>>obj.r;
	obj.circle();
	return 0;
}
