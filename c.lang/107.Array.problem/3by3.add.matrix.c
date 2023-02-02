#include<stdio.h>
int main()
{
   int arr[3][3],brr[3][3],add[3][3];
   int i,j;
   
   printf("enter the 1st matrix to array: \n");
   printf("...................................\n")	;
   for(i=0;i<3;i++)
   {
   	 for(j=0;j<3;j++)
   	 {
   	 	scanf("%d",&arr[i][j]);
		}
   }
	for(i=0;i<3;i++)
   {
   	 for(j=0;j<3;j++)
   	 {
   	 	printf("%d\t",arr[i][j]);
		}printf("\n");
   }
	printf("enter the 2nd matrix to array: \n");
   printf("...................................\n");
   
     for(i=0;i<3;i++)
   {
   	 for(j=0;j<3;j++)
   	 {
   	 	scanf("%d",&brr[i][j]);
		}
   }
	for(i=0;i<3;i++)
   {
   	 for(j=0;j<3;j++)
   	 {
   	 	printf("%d\t",brr[i][j]);
		}printf("\n");
   }
     printf("addition of matrix : \n");
   printf("...................................\n");
 		for(i=0;i<3;i++)
  	 {
  	 	 for(j=0;j<3;j++)
   		 { 
   		   add[i][j]=arr[i][j]+brr[i][j];
   		   printf("%d\t",add[i][j]);
   		}printf("\n");
		}
	return 0;
}
