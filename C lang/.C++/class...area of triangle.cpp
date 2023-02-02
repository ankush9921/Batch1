#include<iostream>
using namespace std;
class area{

	public:
		int b,h;
		
		void tri()
		{
			cout<<endl<<"Area of a Triangle is :"<<0.5*b*h;
		}
};
int main()
{
	area obj;
	cout<<"Enter Breadth of a Triangle :";
	cin>>obj.b;
	cout<<endl<<"Enter Height of a Triangle :";
	cin>>obj.h;
	obj.tri();
	return 0;
}
