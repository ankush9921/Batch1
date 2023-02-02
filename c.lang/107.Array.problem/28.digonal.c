//24. Write a program in C to find the sum of left diagonals of a matrix. Go to the editor
//Test Data :
//Input the size of the square matrix : 2
//Input elements in the first matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Expected Output :
//The matrix is :
//1 2
//3 4
//Addition of the left Diagonal elements is :5
#include<stdio.h>
 int main()
 {
 	int arr[2][2],i,j,sum;
 	
 	printf("enter the vale to store the array: ");
 	
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			scanf("%d ",&arr[i][j]);	
		}
    }
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			printf("%d ",arr[i][j]);	
		}
    }
 	
 	for(i=0;i<2;i++)
 		{
 			for(j=0;j<2;j++)
 			{
 				if(i==j)
 				{
 					sum=sum+arr[i][j];
				 }
				 printf("\n");
			 }
 		}
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			printf("%d ",sum);
		 }
	 }
 	
 	return 0;
 }
