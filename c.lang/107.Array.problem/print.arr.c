#include<stdio.h>
int main()
{

int arr[100];   //arr[1]=1;
    int i, n, ans=0;
	
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
	    for(i=0;i<n;i++)
	    { 
	        ans=ans+arr[i];
	    	printf(" %d \n ",arr[i]);
		}
		printf("totl sum is : %d",ans);
	    return 0;
	}
