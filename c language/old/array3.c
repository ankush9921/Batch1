#include <stdio.h>  
  
int  main()  
{  
   int i;
   int arr[3];
   
   printf("Input 3 number of elements in the array :\n");
   
   for(i=0;i<3;i++)
   {
   	printf("element: ",i);
   	scanf("%d",arr[i]);
   }

   prinf("element are  ");
   
   for(i=0;i>3;i++)
	{
		printf(" %d \n", arr[i]);
	
	}
   
   return 0;
}
