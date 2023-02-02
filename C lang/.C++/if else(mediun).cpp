#include<iostream>
using namespace std;
int main()
{
	float a,b,c,median;
	cout<<"Enter first Number :";
	cin>>a;
	cout<<"Emter second Number :";
	cin>>b;
	cout<<"Enter third Number :";	
	cin>>c;
	if(a<b && b<c)
	{
		median=b;
	}
	else if(b<a && a<c)
	{
		median=a;
	}
	else
	{
		median=c;
	}
	cout<<"The median is "<<median;
		
	return 0;
}
