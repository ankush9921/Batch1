#include<stdio.h>
int main()
{  int p=9;
   int q=4;
   int r=5;
   int x=8;
   int ans;
   
   ans=x*x*x+(p+q+r)*x*x+(p*q+q*r+r*p)*x+p*q*r;
   printf("%d",ans);
	
	
	
	
	return 0;
}
