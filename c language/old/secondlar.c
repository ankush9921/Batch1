//Write a program in C to find the second largest element in an array

#include<stdio.h>
int main()
{
	int i,n,j=0,arr[100],first,second;
	printf(" number of elements  array :");
       scanf("%d",&n);
       
       printf(" %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
	    first=0;
	    for(i=0;i<n;i++)
	    {
	    	if(first<arr[i])
	    	{
	    		first=arr[i];
	    		j=i;
			}
		}
		second=0;
		for(i=0;i<n;i++)
		{
			if(i==j)
			{
				i++;
				i--;
			}
			else
			{
				if(second<arr[i])
				{
					second=arr[i];
				}
			}
		}
	    
	printf("second largest no.:  %d",second);
	return 0;
}
