#include<stdio.h>
int main ()
{
	int arr[2][2];
	int i,j;
	
	printf("enter the vale to array: \n");
	for (i=0;i<2;i++)
	{
	   for(j=0;j<2;j++){
	   
			scanf("%d",&arr[i][j]);}
	}
	for (i=0;i<2;i++)
	{   
	   for(j=0;j<2;j++){
	   
		printf("%d\t",arr[i][j]);
	}  printf("\n");
	 }
	
	
	return 0;
}
