//Write a program in C to find the maximum and minimum element in an array. element of an array. 

#include <stdio.h>
int main()
{
   int arr1[100];
    int i,n,max,min;
       	
       printf("Input the number of elements in array: ");
       scanf("%d",&n);
       printf("Enter %d elements: ",n);
       for(i=0;i<n;i++)
            {
           printf("element: %d  ",i); 	
	      scanf("%d",&arr1[i]);
	    }
	    max=arr1[0];
	    min=arr1[0];
	    
	    for(i=1;i<n;i++)
	    {
	    	if(arr1[i]>max)
	    	{
	    		max=arr1[i];
			}
		}
		 for(i=1;i<n;i++)
		{
		 
		if(arr1[i]<min)
	    	{
	    		min=arr1[i];
			}
	    }
			printf("maximum:  %d\n",max);
				printf("minimum:  %d",min);
			
   
    return 0;
}
   
   
