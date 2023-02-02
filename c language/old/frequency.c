//Write a program in C to count the frequency of each element of an array. 

#include <stdio.h>
int main()
{
   int arr1[100], freq1[100];
    int i, j,n,count;
       	
       printf("Input the number of elements in array: ");
       scanf("%d",&n);
       printf("Enter %d elements: ",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&arr1[i]);
	      freq1[i]=-1;
	    }
    
    for(i=0; i<n; i++)
    {
        count=1;
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                count++;
                freq1[j] = 0;
            }
        }

        if(freq1[i]!=0)
        {
            freq1[i] = count;
        }
    }
    printf("\nThe  elements are: ");
    for(i=0; i<n; i++)
    {
        if(freq1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], freq1[i]);
        }
    }
    return 0;
}
   
   
