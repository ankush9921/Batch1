#include<stdio.h>
int main()
{
	int day, month, year, monthday;
	printf("enter day: ");
	scanf("%d",&day);
	printf("enter month: ");
	scanf("%d",&month);

	if(((month==12 || month==1) && day<=31)  || (month==2 && day<=28))
	{
		printf("\nseason-winter");
	}
	else if(((month==3 || month==5) && day<=31) || (month==4 && day<=30) )
	{
		printf("\nseason-summer");
	}
	else if(((month==7 || month==8) && day<=31) || (month==6 && day<=30) )
	{
		printf("\nseason-spring");
	}
	else if(((month==9 || month==11) && day<=30) || (month==10 && day<=31) )
	{
		printf("\nseason-Autumn");
	}
	return 0;
}

