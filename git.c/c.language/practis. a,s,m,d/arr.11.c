#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	for(i=1;i<10;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<10;i++)
	{
		if(i%2==0)
		{
			printf("the num is even%d\n",arr[i]);
		}
		else
		{
			printf("the num is odd%d\n",arr[i]);
		}
	}
	
	return 0;
}
