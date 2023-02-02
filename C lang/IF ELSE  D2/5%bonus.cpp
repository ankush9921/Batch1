// 5 % bonus in company
#include<iostream>
using namespace std;
int main()
{
	int salary,bonus,year,total;
	cout<<"Enter the Salary : ";
	cin>>salary;
	cout<<"Enter the Years of Service : ";
	cin>>year;
	bonus=salary*0.05;
	
	if(year>5)
	{
		total=salary+bonus;
		cout<<"The total amount of net bonus is Rs. "<<total;
	}
	else
	{
		cout<<"The Salary is Rs. "<<salary;
		cout<<endl<<"The employee is not get bonus .";
	}
	
	
	
	return 0;
}
