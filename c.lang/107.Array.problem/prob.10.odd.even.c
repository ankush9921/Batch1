//10. Write a program in C to separate odd and even integers in separate arrays. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :5
//Input 5 elements in the array :
//element - 0 : 25
//element - 1 : 47
//element - 2 : 42
//element - 3 : 56
//element - 4 : 32
//Expected Output :
//The Even elements are :
//42 56 32
//The Odd elements are :
//25 47
#include<stdio.h>
int main()
{
    int arr[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		}	
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			printf("the even num%d: \n ",arr[i]);
		}
		else
		{
				printf("the odd num%d:\n ",arr[i]);
		}
	}
	
	
	
	
	return 0;
}
