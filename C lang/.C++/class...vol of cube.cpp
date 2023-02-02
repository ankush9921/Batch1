#include<iostream>
using namespace std;
class vol{

	public:
		int s;
		
		void cube()
		{
			cout<<endl<<"Volume of Cube is :"<<s*s*s;
		}
};
int main()
{
	vol obj;
	cout<<"Enter side of a Cube :";
	cin>>obj.s;
	obj.cube();
	return 0;
}
