#include<stdio.h>
int main()
{  int a=98;
   int b=55;
   int c=45; 
   int ans;	
	
	ans=a*a*a+b*b*b+c*c*c+3*(a+b)*(b+c)*(c+a);
	   printf("%d",ans);
	
	return 0;
}
