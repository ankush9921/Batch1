//1. Write a program in C to store elements in an array and print it. Go to the editor
//Test Data :
//Input 10 elements in the array :
//element - 0 : 1
//element - 1 : 1
//element - 2 : 2
//.......
//Expected Output :
//Elements in array are: 1 1 2 3 4 5 6 7 8 9

#include<stdio.h>
int main()
{
	int i;
	int arr1[5];
	
	for(i=0; i<5; i++)
	{
		printf("\n elements : ");
		scanf("%d",& arr1[i]);
	}
    	printf("\n enter in array are:");
    	for(i=0; i<5; i++)
	{
	   printf("%d", i);
    }

	return 0;
}
