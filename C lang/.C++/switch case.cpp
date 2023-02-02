#include<iostream>
using namespace std;
int main()
{
	char  a;
	do
	{
	
	cout<<"1.Addition"<<endl<<"2.Subtration"<<endl<<"3.Multiplication"<<endl<<"4.Divison"<<endl<<"5.Exit"<<endl;
	
	int ch,num1,num2;
	
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
				cout<<"Enter Two Numbers for addition : \n";
				cin>>num1>>num2;
				cout<<num1+num2;
				break;
			}
			
		case 2:
			{
				cout<<"Enter Two Numbers for Subtraction : \n";
				cin>>num1>>num2;
				cout<<num1-num2;
				break;
			}	
		
		case 3:
			{
				cout<<"Enter Two Numbers for Multiplication : \n";
				cin>>num1>>num2;
				cout<<num1*num2;
				break;
			}
		
		case 4:
			{
				cout<<"Enter Two Numbers for Division : \n";
				cin>>num1>>num2;
				cout<<num1/num2;
				break;
			}
		default:
		    {
		    	cout<<"Wrong Choice";
			}	
	}
	cout<<endl<<"Do you want to continue ? [Y/N] :";
	cin>>a;
	
    }while(a=='Y');
    
	return 0;
}
