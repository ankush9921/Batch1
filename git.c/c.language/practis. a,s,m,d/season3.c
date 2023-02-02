 //Write a Python program that reads one integers representing a day and a srting representing month and prints the season of that month and day.    
//input:
//month - 12
//date - 5
//output:
//season - Winter     season chart    :  December, January, February     - winter
//March, April, May        - Spring
//June, July, August       - Summer
//september, october, november - Autumn     
//note** All the validation should be under considaration
#include<stdio.h>
int main()
{
	int day, month, year, monthday;
	printf("enter day: ");
	scanf("%d",&day);
	printf("enter month: ");
	scanf("%d",&month);
	printf("enter year: ");
	scanf("%d",&year);
	if(month>=1 &&month<=12)
	{
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		{
			monthday=31;
		}
		
		else if(month==4 || month==6 ||month==9 || month==11)
		{
			monthday=30;
		}
		else
		{
			monthday=28;
		}
		if(day>=1 && day<=monthday)
		{
			if(day==monthday &&month==12 )     //31-12-2023
			{
				day=1;
				month=1;
				year++;
			}
			else if(day==monthday)         //31-2-----1-3
			{
				day=1;
				month++;
			}
			else
			{
				day++;                  //day=31----day=1
			}
			printf("happy new year : ");
			printf("%d-%d-%d", day, month, year);	
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
	
	
	
	
	
	
	if(month==12 || month==1 || month==2)
	{
		printf("\nseason-winter");
	}
	else if(month==3 || month==4 || month==5)
	{
		printf("\nseason-spring");
	} 
	else if(month==6 |month==7||month==8)
	
	{
		printf("\nseason-summer");
	}
	else
	{
		printf("\nseason-Autumn");
	}
	return 0;
}

