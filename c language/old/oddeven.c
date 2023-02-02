//Write a program in C to separate odd and even integers in separate arrays.

#include<stdio.h>
int main()
{
int arr1[100],arr2[100],arr3[100];
int i,j=0,k=0,n;
	 printf(" number of elements  array :");
       scanf("%d",&n);
   
       printf(" %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	    	if(arr1[i]%2==0)
	    	{
	    		arr2[j]=arr1[i];
	    		j++;
			}
			else
			{
			  arr3[k]=arr1[i];
			  k++;
		    }
	    }
		    printf("even element: ");
		    for(i=0;i<j;i++)
		    {
		    	printf("%d ",arr2[i]);
			}
			printf("\nodd element: ");
			 for(i=0;i<k;i++)
		    {
		    	printf("%d ",arr3[i]);
			}
			printf("\n");
		

	return 0;
}
