//4. Write a program in C to copy the elements of one array into another array. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 15
//element - 1 : 10
//element - 2 : 12
//Expected Output :
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h>
int main()
{
	int arr[3],i;
	int arr2[3];
		printf("Input the number of elements to be stored in the array :");
	for(i=0;i<3;i++)
	   
//	printf("Input the number of elements to be stored in the array :");
	  for(i=0;i<3;i++){
	  
		scanf("%d",&arr[i]);
		}
		for(i=0;i<3;i++)
	{
			printf("%d",arr[i]);
		}	
	
		for(i=0;i<3;i++)
		{
			arr[i]=arr2[i];
			//printf("%d",arr2[i]);
		}
		for(i=0;i<3;i++)
		{
				printf("%d",arr2[i]);
		}
	
	
	return 0;
}
