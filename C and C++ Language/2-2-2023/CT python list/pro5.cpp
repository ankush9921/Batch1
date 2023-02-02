//5. Write a Python program that reads one integers representing a day and a srting representing month and prints the season of that month and day.	
//	input:
//		month - 12
//		date - 5
//	output:
//		season - Winter
//
//	season chart	:  December, January, February 	- winter
//			   March, April, May		- Spring
//			   June, July, August   	- Summer
//			   september, october, november - Autumn



#include<iostream>
using namespace std;

int main()
{
	int d,m,y,choice;
	
	Date:
	cout<<"Enter the date=";
	cin>>d;
	
	if(d<=0 || d>31)
	{
		cout<<"\nInvalid Date\nPlease enter valid date\n\n";
		goto Date;
	}
	
	Month:
	cout<<"\nEnter the month=";
	cin>>m;	
	if(m<=0 || m>12)
	{
		cout<<"\nInvalid Month\nPlease enter valid Month\n\n";
		goto Month;
	}
	
	Year:
	cout<<"\nEnter the year=";
	cin>>y;	
	
	cout<<"\n\n\nCurrent Date is [dd-mm-yyyy]=\t\t"<<d<<"-"<<m<<"-"<<y;

	if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10) && d<=31)
	{
		if(d==31)		//31-3-2022	--- 1-4-2023
		{
			d=1;
			m++;
		}
		else			//30-1-2022	-- 31-1-2022
		{
			d++;
		}
	}
	else if(m==12 && d<=31)
	{
		if(d==31)		//31-12-2022	--- 1-1-2023
		{
			d=1;
			m=1;
			y++;
		//	cout<<"\n\n!!	HAPPY	NEW	YEAR	"<<y<<"	!!";
		}
		else			//29-12-2022	-- 30-12-2022		
		{
			d++;
		}
	}
	else if((m==4 || m==6 || m==9 || m==11) && d<=30)
	{
		if(d==31)		//30-4-2022	--- 1-5-2023
		{
			d=1;
			m++;
		}
		else			//29-6-2022	-- 30-6-2022
		{
			d++;
		}
	}
	else if(m==2 && d<=29)
	{
		if(y%4==0)
		{
		//	cout<<"! ! ! "<<y<<"Is Leap Year ! ! !";
		
			if(d==29)		//29-2-2022	--- 1-3-2023
			{
				d=1;
				m++;
			}
			else			//28-2-2022	-- 29-2-2022
			{
				d++;
			}
			
		}
		else
		{
			if(d==28)		//28-2-2022	--- 1-3-2023
			{
				d=1;
				m++;
			}
			else			//27-2-2022	-- 28-2-2022
			{
				d++;
			}
			
		}
		
	}
	else
	{
		change_DM:
			
		cout<<"\n\nYou conform that your date and month is correct .\n";
		cout<<"\n1.For change the Date . \n\n2.For change the Month . ";
		cin>>choice;
		switch (choice)
		{
			case 1:
				{
					goto Date;
					break;
				}
			case 2:
				{
					goto Month;
					break;
				}
			default:
				{
					cout<<"\nWrong Choice .\n";
					goto change_DM;
				}
				
		}
		
	}
	
	cout<<"\n\n\nThe next date is [dd-mm-yyyy]=\t\t"<<d<<"-"<<m<<"-"<<y;
	
	if(m==12 || m==1 || m==2 )
	{
		cout<<"\n\nSeason - Winter";
	}
	else if(m==3 || m==4 || m==5 )
	{
		cout<<"\n\nSeason - Spring";
	}
	else if(m==6 || m==7 || m==8 )
	{
		cout<<"\n\nSeason - Summer";
	}
	else if(m==9 || m==10 || m==11 )
	{
		cout<<"\n\nSeason - Autumn";
	}
	
	
	return 0;
}
