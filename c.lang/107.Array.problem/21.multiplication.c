//19. Write a program in C for addition of two Matrices of same size. Go to the editor
//Test Data :
//Input the size of the square matrix (less than 5): 2
//Input elements in the first matrix :
//element - [0],[0] : 1
//element - [0],[1] : 2
//element - [1],[0] : 3
//element - [1],[1] : 4
//Input elements in the second matrix :
//element - [0],[0] : 5
//element - [0],[1] : 6
//element - [1],[0] : 7
//element - [1],[1] : 8
//Expected Output :
//The First matrix is :
//
//1 2
//3 4
//The Second matrix is :
//
//5 6
//7 8
//The miltplicatin of two matrix is :
//
//6 8
//10 12
#include<stdio.h>
int main()
{
	 int arr[2][2],brr[2][2],add[2][2],i,j;
	 
	 printf("enter the value tp store to the array: \n");
	 printf("the first matrix: \n");
	 
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		scanf("%d",&arr[i][j]);
		 }
	 }
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
	 	for(j=0;j<2;j++)
	 	{
	 		scanf("%d",&brr[i][j]);
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
	 
	 printf("The multiflication of two matrix is : \n");
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		add[i][j]=arr[i][j]*brr[i][j];
	 		printf("%d\t",add[i][j]);
	 }
 		 printf("\n");
	 }
	  
	 		
	return 0;
}
