//Write a program in C to delete an element at desired position from an array.

#include<stdio.h>
int main()
{
int i,n,arr[100],del;	
printf(" number of elements  array :");
       scanf("%d",&n);
       
       printf(" %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
	    printf("enter the delete no.:  ");
	    scanf("%d",&del);
		
		if(del>n || del<=0)
		{
			printf("invalid ");
			
		}
		else{
			for(i=del-1;i<n-1;i++)
		{
		arr[i]=arr[i+1];
    	}
		n--;
		printf("array after delete:  ");
		for(i=0;i<n;i++)
		{
			printf("%d  ",arr[i]);
		}
    	}
	return 0;
}
