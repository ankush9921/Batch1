//Write a program in C to find the sum of all elements of the array. 

#include<stdio.h>
int main()
{
	int i,n,arr[100],sum=0;
	
	printf("enter the sum element:  ");
	scanf("%d",&n);
	
	printf("enter element:  ");
	for(i=0;i<n;i++)
	{
	 
	  scanf("%d\n",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	   sum += arr[i];	
	}
	printf("sum of number :  %d",sum);	
	
	return 0;
}

