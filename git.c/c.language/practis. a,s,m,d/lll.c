//Write a program in C to find the sum of all elements of the array. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 8
//Expected Output :
//Sum of all elements stored in the array is : 15
#include<stdio.h>
int main()
{
	int arr[10], i, n, sum=0;
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("elements ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=+arr[i];
		printf("sum of all element: %d", sum);
	}
	return 0;
}
