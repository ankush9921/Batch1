#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("enter the value : ");
   scanf("%d",&n);
   printf(" %d",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("nThe Sum of natural numbers upto %d terms : %d ",n,sum);
   return 0;
}


