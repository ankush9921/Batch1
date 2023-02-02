//Write a program in C to insert New value in the array (sorted list )

#include<stdio.h>
int main()
{
	int i,n,k;
	int arr1[100],insert;
	 printf(" number of elements  array :");
       scanf("%d",&n);
   
       printf(" %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }	
	    printf("insert number:  ");
	    scanf("%d",&insert);
	    
	    for(i=0;i<n;i++)
	    {
	    	if(insert<arr1[i]){
	    	k=i;
			break;	
			}
			else
			{
				k=i+1;
			}
			
		}
		for(i=n;i>=k;i--)
		{
			arr1[i]=arr1[i-1];
	    }
			arr1[k]=insert;
		
		printf("after insert:  ");
		for(i=0;i<n;i++)
		{
			printf("%d \n",arr1[i]);
		}
		
	
	
	
	return 0;
}
