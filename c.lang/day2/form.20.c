#include<stdio.h>
int main()
{  int a=98;
   int b=55;
   int c=45; 
   int ans;	
	
	ans=(a+b+c)*(a*a+b*b+c*c-a*b-b*c-c*a);
	   printf("%d",ans);
	
	return 0;
}
