#include<stdio.h>
int main()
{
	int year ;
	printf("Enter year");
	scanf("%d",&year);
	
	if ((year %4==0)&&(year % 400==0));
	{
		printf("%d year is LEAP YEAR");
	} return 0;
}
