//5. Write a program in C to count a total number of duplicate elements in an array. Go to the editor
//Test Data :
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//element - 0 : 5
//element - 1 : 1
//element - 2 : 1
//Expected Output :
//Total number of duplicate elements found in the array is : 1
#include<stdio.h>
int main()
{  
  int  arr[3]={4,4,5};
  int i;
	
	for(i=0;i<3;i++)
	{
		if(arr[i]==arr[i+1])
		{
			printf("%d",arr[i]);
		}
	}
     return 0;
}

