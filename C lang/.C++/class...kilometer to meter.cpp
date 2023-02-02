#include<iostream>
using namespace std;
class meter{
	public:
		int kilo,meter;
		
		void kil()
		{
			cout<<endl<<kilo*1000;
		}
};
int main()
{
	meter obj;
	cout<<"Enter Kilometer :";
	cin>>obj.kilo;
	obj.kil();
	
	return 0;
}
