#include<stdio.h>
int main()
{
	int month,year,day,monthday;

	
	printf("day  ");
	scanf("%d",&day);
	
	printf("month  ");
	scanf("%d",&month);
	
	printf("year  ");
	scanf("%d",&year);
	
if(month>=1 && month<=12)
{
	if(month==1 || month==3 || month==5 || month==7 || month==8|| month==10 || month==12)
	{
		monthday=31;
	}
	else if(month==4||month==6||month==9||month==11)
	{
		monthday=30;
	}
	else
	{
		month=28;
	}
	if(day>=1 && day<=monthday)
	{
		if(day==monthday && month==12)
		{
			day=1;
			month=1;
			year++;
			
		}
		else if(day==monthday)
		{
			day=1;
			month++;
			
		}
		else
		{
			day++;
		}
		printf("%d-%d-%d \n",day,month,year);
	}
	else
	{
		printf("invalid day");
		
	}
}
else
{
	printf("invalid month");
	
}
    if (month == 12 || month == 1 || month == 2)
	{
        printf("season = Winter");
    } 
	else if (month == 3 || month == 4 || month == 5)
	{
        printf("season = Spring");
    }
    else if (month == 6 || month == 7 || month == 8)
	{
        printf("season = Summer");
    } 
	else 
	{
        printf("season = autumn");
    }

    return 0;
}

