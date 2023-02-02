#include<stdio.h>
//assending order
int main()
{
   int arr[10]={10,8,7,9,5,6,9,8,9,1};
   int i,j,tem;
   for(i=0;i<10;i++)
   {
   		for(j=0;j<10;j++)
   		{   
   		   if(arr[j]>arr[j+1])
   		   {
			  
   		    tem=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tem;
		}
		}
   }
   for(i=0;i<10;i++)
   {
   
	printf("%d ",arr[i]);
   }
	
   return 0;	
}
