#include<iostream>
using namespace std;
int main()
{
	int date,month,year,ch;
	Date_D:
	cout<<"Enter Date : ";
	cin>>date;
	if(date<0 || date>31)
	{
		cout<<"Invalid Date .\n";
		cout<<"Pleace enter valid date .\n";
		goto Date_D;
	}
	Month_M:
	cout<<"\nEnter Month : ";
	cin>>month;
	if(month<0 || month>12)
	{
		cout<<"Invalid Month .\n";
		cout<<"Pleace enter valid Month .\n";
		goto Month_M;
	}
	Year_Y:
	cout<<"\nEnter Year : ";
	cin>>year;
	if(year<1000 || year>3000)
	{
		cout<<"Invalid Year .\n";
		cout<<"Pleace enter valid Year .\n";
		goto Year_Y;
	}
	
	cout<<"\n"<<date<<"\t"<<month<<"\t"<<year<<endl;
	
	if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && (date==31))
	{
		date=1;
		month=month+1;
	}
	else if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && (date<=30))
	{
		date=date+1;
	}
	else if(month==2 && date<=29)
	{
		if(year%4==0)
		{
			if(date<=28)
			{
				date=date+1;
			}
			else
			{
				date=1;
				month=month+1;
			}		
			cout<<"\n !!  It Is a leap year  "<<year<<"  !! \n";
		}
		else 
		{
			if(date==28)
			{
				date=1;
				month=month+1;
			}
			else
			{
				date=date+1;
			}
			
		}
	}

	else if((month==4 || month==6 || month==9 || month==11 ) && (date==30))
	{
		date=1;
		month=month+1;

	}
	else if((month==4 || month==6 || month==9 || month==11 ) && (date<=29))
	{
		date=date+1;
		
	}
	else if(month==12 && date==31)
	{
		date=1;
		month=1;
		year=year+1;
		cout<<"\n!!  H A P P Y     N E W   Y E A R  "<<year<<"  !!\n";
		
	}
	else if(month==12 && date<=30)
	{
		date=date+1;
	}
	else
	{
		Change_DM:
		cout<<"\nMake sure your date and month is correct : \n";
		cout<<"\n1.For change the Date .\n \n2.For change the Month .\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					goto Date_D;
					break;
				}
			case 2:
				{
					goto Month_M;
					break;
				}
			default:
				{
					cout<<"\nWrong Choice .\n";
					goto Change_DM;
				}
		}	
	}
	cout<<"\n"<<date<<"\t"<<month<<"\t"<<year<<"\n";
	if(month==12 || month==1 || month==2)
	{
		cout<<"\nThe season is WINTER .\n";
	}
	else if(month==3 || month==4 || month==5)
	{
		cout<<"\nThe season is SPRING .\n";
	}
	else if(month==6 || month==7 || month==8)
	{
		cout<<"\nThe season is SUMMER .\n";
	}
	else
	{
		cout<<"\nThe season is AUTUMN .\n";
	}
	return 0;
}
