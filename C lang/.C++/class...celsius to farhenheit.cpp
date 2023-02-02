#include<iostream>
using namespace std;
class fahrenheit{
	public:
		float c;
		
		void cels()
		{
			cout<<endl<<1.8*c+32;
		}
};
int main()
{
	fahrenheit obj;
	cout<<"Enter Celsius :";
	cin>>obj.c;
	obj.cels();
	
	return 0;
}
