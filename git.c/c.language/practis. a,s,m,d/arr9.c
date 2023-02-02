#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	int ans1=0, ans2=0;
	
	for(i=0; i<10; i++)
	{
	printf("Enter the number: ");
	scanf("%d", &arr[i]);
	}
	for(i=0; i<10; i++)
	{
		if(i%2==0)
	{
	printf("the even number is  :%d\n",arr[i]);
	ans1=ans1+arr[i];
	}
	else 
	{
	printf("the odd number is   :%d\n",arr[i]);
	ans2=ans2+arr[i];
	}
	}
	printf("the sum of ans1:%d\n", ans1);
	printf("the sum of ans2:%d\n", ans2);
	return 0;
}


