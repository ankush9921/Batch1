#include <stdio.h>
int main()

{
   int i,n,sum=0;

   printf("enter the value : ");
   scanf("%d",&n); 
   for(i=1;i<=n;i++)
   {
     printf("%d ",i*i);
     i*i*i;
   }
   printf("%d",i );
   return 0;
} 
