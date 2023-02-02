#include<stdio.h>

int main()
{
	int a=5;
	int b=10;
	
	int ans;
	
	ans=b;
   	  b=a;
   	  a=ans;
   	  
   	  printf("%d\n%d",a,b);
   	  
   	  return 0;
	
}
