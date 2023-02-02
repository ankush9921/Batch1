#include<iostream>
using namespace std;
int main()
{
	int date,month,year,ch;
	Date_:
	cout<<"Enter Date : ";
	cin>>date;
	if(date<0 || date>31)
	{
		cout<<"\nInvalid date .\n\nPlease enter valid date .\n\n";
		goto Date_;
	}
	Month_:
	cout<<"\nEnter Month : ";
	cin>>month;
	if(month<0 || month>12)
	{
		cout<<"\nInvalid month .\n\nPlease enter valid month .\n\n";
		goto Month_;
	}
	Year_:
	cout<<"\nEnter Year : ";
	cin>>year;
	if(year<1000 || year>9999)
	{
		cout<<"\nInvalid year .\n\nPlease enter valid year .\n\n";
		goto Year_;
	}
	cout<<endl<<"The given Date Is :   "<<date<<"\t-\t"<<month<<"\t-\t"<<year<<endl;
	if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 ) && (date==31))
	{
		date=1;
		month=month+1;
	}
	else if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 ) && (date<=30))
	{
		date=date+1;
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
	else if((month==12 ) && (date==31))
	{
		date=1;
		month=1;
		year=year+1;
		cout<<"\n!!     H A P P Y    N E W    Y E A R   "<<year<<"	!!\n";
	}
	else if((month==12 ) && (date<=30))
	{
		date=date+1;
	}
	else if((month==2 ) && (date==28 || date==29))
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
			cout<<"\n!!   I T   I S   A   L E A P   Y E A R   !!\n";
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
	else
	{
		Change_DM:
		cout<<"\nConfirm Your Date and Month is Correct . \n";
		cout<<endl<<"1.Change the Date .\n2.Change the Month .\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					goto Date_;
					break;
				}
			case 2:
			    {
			    	goto Month_;
			    	break;
				}
			default:
		    	{
					cout<<"\nWrong Choice . \n";
					goto Change_DM;
				}
			
		}	
	}
	cout<<endl<<"The Next Date Is  :   "<<date<<"\t-\t"<<month<<"\t-\t"<<year<<endl;

	
	
	return 0;
}

