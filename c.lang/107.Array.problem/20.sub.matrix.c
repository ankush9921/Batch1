//20. Write a program in C for subtraction of two Matrices. Go to the editor
//Test Data :
//Input the size of the square matrix (less than 5): 2
//Input elements in the first matrix :
//element - [0],[0] : 5
//element - [0],[1] : 6
//element - [1],[0] : 7
//element - [1],[1] : 8
//Input elements in the second matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Expected Output :
//The First matrix is :
//
//5 6
//7 8
//The Second matrix is :
//
//1 2
//3 4
//The Subtraction of two matrix is :
//
//4 4
//4 4
#include<stdio.h>
int main()
{
   int arr[2][2],brr[2][2],sub[2][2],i,j;
   
   printf("matrix 1st : \n");
   
   for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
   	{
   		scanf("%d",&arr[i][j]);
	   }
	   
	   }
	   printf("\n");	
	for(i=0;i<2;i++)
   {
   	for(j=0;j<2;j++)
   	{
   		printf("%d\t",arr[i][j]);
	   }
	   printf("\n");
	   }	
	   printf("matrix second: \n");
	   
	   for(i=0;i<2;i++)
	   {
	   	for(j=0;j<2;i++)
	   	{
	   		scanf("%d",brr[i][j]);
		   }
	   }
	    for(i=0;i<2;i++)
	    {
	    	for(j=0;j<2;j++)
	    	{
	    		printf("%d\t",brr[i][j]);
			}
			
		printf("\n");	
		}
	  printf("substraction of matrix: \n");
	  for(i=0;i<2;i++)
	   {
	   	for(j=0;j<2;i++)
	   	{
	   		sub[i][j]=arr[i][j]-brr[i][j];
	   		printf("%d\t",sub[i][j]);
		   }
		   printf("\n");
	   }
	
	
	
	return 0;
}
