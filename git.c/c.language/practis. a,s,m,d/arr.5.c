#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	int ans1, ans2;
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
			ans1=ans1+arr[i];
		}
		else
		{
			printf("the num is odd%d\n",arr[i]);
			ans2=ans2+arr[i];
		}
	}
	printf("sum of even is:%d \n", ans1);
	printf("sum of odd is:%d ", ans2);
	
	return 0;
}
