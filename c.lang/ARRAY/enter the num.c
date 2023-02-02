#include<stdio.h>
int main()
{
	int n,i;
	int arr[1000];
	
	printf("Input the number of elements to be stored in the array :");
	scanf("%d",&n);
	printf("input 10 element in the array: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",i);
	}
	
	
	
	
	return 0;
}
