#include<stdio.h>
int main()
{  
    int i,j,tem; 
	int arr[10]={1,2,3,4,5,6,7,8,9};
	for(i=0;i<10;i++)
	{
	  for(j=i+1;j<10;j++)
	  {
	  	if(arr[j]>arr[i])
	  	{
	  	  tem=arr[i];
		  arr[i]=arr[j];
		  arr[j]=tem;		
		}
	  }
    }
}
	 printf("Printing Sorted Element List \n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d",arr[i]);
	 }
	
	
	return 0;
}
