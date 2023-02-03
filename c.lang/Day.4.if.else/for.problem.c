#include<stdio.h>
int main()
{
	int n=5,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf(" o ");
			}
			else
			{
				printf(" x ");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
