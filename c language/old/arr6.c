//Write a program in C to read n number of values in an array and display it in reverse order

#include<stdio.h>

int main()
{ 
 
	int i,n;
	
	printf("input array: ");
	scanf("%d",&n);
	
	int arr[n];
	for (i=0;i<n;i++)
	{
	    printf("element -  ");
		scanf("%d", &arr[i]);
	}
	printf("elements are - ");
	
	for(i=n-1;i>=0;i--)
	{
		printf(" %d \n", arr[i]);
	
	}
	
	
	return 0;
}
