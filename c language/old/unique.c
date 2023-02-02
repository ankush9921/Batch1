//Write a program in C to print all unique elements in an array.

#include <stdio.h>

int main() 
    {
 
     int arr1[100], n,count=0;
    int i, j;
       	
       printf("Input the number of elements in array: ");
       scanf("%d",&n);
       printf("Enter %d elements: ",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements are: ");
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 count++;
               }
             }
        }
       if(count==0)
        {
          printf("%d ",arr1[i]);
        }
    }
    return 0;
}

