#include<stdio.h>
int main()
{  int a=98;
   int b=55;
   int c=45; 
   int ans;	
	
	ans=(0.5)*(a+b+c)*(a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);
	   printf("%d",ans);
	
	return 0;
}
