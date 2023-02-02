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
  int i,arr[10];
  
  printf("enter the arr[10]=value: \n");
  for(i=0;i<10;i++)
  {
  	scanf("%d",&arr[i]);
  }
  for(i=1;i<10;i++)
  {
  	printf("%d",arr[i]);
  }
	
	
	return 0;
}

