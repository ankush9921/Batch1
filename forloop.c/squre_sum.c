#include <stdio.h>
int main()

{
   int i,n,sum=0;

   printf("enter the value : ");
   scanf("%d",&n);
   printf("\nThe square numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",i*i);
     sum+=i*i;
   }
   printf("\nThe Sum of square %d terms : %d \n",n,sum);
   return 0;
} 
