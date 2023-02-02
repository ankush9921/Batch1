#include<stdio.h>
int main()
{
	int day,round;
	for(day=1;day<=5;day++)
	{
		printf("day=%d ",day);
		for(round=1;round<=day;round++)
		{
			printf("round=%d",round);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
