//count the num 
#include<stdio.h>
int main()
{
   int num,ans=0;
   printf("enter the num : \n");
   scanf("%d",&num);
   
   while(num>0)
   {
   	ans++;
   	num=num/10;
   }	
   printf("%d",ans);
   	
	
	
	return 0;
}
