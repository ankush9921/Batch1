#include<stdio.h>

int main()
{   
   	int a,b,tem;
   	printf("enter the num : ");
   	scanf("%d%d",&a,&b);
   	
   	tem=a;
   	a=b;
   	b=tem;
   	printf("%d",a);
   	printf("%d",b);
	
	
	
	return 0;
}
