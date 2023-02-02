#include<stdio.h>
int main()
{ 
    int arr[20];
	int i;  
    for(i=1;i<20;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=1;i<20;i++)
	{
		if(i%2==0)
		{   
	    	printf("this is even number: ");
			printf("%d\n",arr[i]);
			
		}
	}
	
	
	return 0;
}
