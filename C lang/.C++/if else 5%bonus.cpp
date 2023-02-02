 #include<iostream>
using namespace std;
int main()
{
	int salary,bonus,year,total;
	cout<<"Enter the Salary And Year :";
	cin>>salary>>year;
	bonus=salary/20;
	total=salary+bonus;
	if(year>5)
	{
		cout<<"He/she get :"<<total;
	}
	else
	{
		cout<<"He/She will not get bonus";
	}
	
	
	return 0;
}
