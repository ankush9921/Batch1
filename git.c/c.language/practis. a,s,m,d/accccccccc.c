#include<stdio.h>
int main()
{
	int day, month, year, monthday;
	printf("enter day : ");
	scanf("%d",&day);
	printf("enter month : ");
	scanf("%d",&month);
	printf("enter year : ");
	scanf("%d",&year);
	if(day>=1 && monthday<=12)
	{
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		{
			monthday=31;
		}
		else if(month==4 || month==6 || month==9 || month==11)
		{
			monthday=30;
		}
		else
		{
			monthday=28;
		}
		if(day>=1 && day<=monthday)
		{
			if(day==monthday && month==12)
			{
				day=1;
				month=1;
				year++;
				printf("HAPPY NEW YEAR : ");
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
		//printf("HAPPY NEW YEAR : ");
		printf("%d-%d-%d", day, month, year);
		}
		else
		{
			printf("invalid day");
		}	
	}
	else
	{
		printf("invalid month: ");
	}
	
	return 0;	
}
