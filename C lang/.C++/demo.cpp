#include<iostream>
using namespace std;
int main()
{
	char a;
	do
	{
		cout<<"1.Addition :"<<endl<<"2.Subtraction :"<<endl<<"3.Multiplicaation :"<<endl<<"4.Division :"<<endl<<"5.Exit :"<<endl;
		int ch,num1,num2;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter Two Numbers For Addition : \n";
					cin>>num1>>num2;
					cout<<num1+num2;
					break;
				}
			case 2:
				{
					cout<<"Enter Two Numbers For Subtraction : \n";
					cin>>num1>>num2;
					cout<<num1-num2;
					break;
				}
			case 3:
				{
					cout<<"Enter Two Numbers For Multiplication : \n";
					cin>>num1>>num2;
					cout<<num1*num2;
					break;
				}
			case 4:
				{
					cout<<"Enter Two Numbers For Division : \n";
					cin>>num1>>num2;
					cout<<num1/num2;
					break;
				}
			default:
			{
				cout<<"Wrong Choice.\n";
			}
			
		}
	cout<<endl<<"Do you want to continue ? [ Y \\ N ] \n";
	cin>>a;
		
	}while(a=='Y');

	return 0;
}
