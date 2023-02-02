#include<stdio.h>

int main()
{
  int p=40;
  int q=30;
  int r=20;
  int x=10;
 
  int ans;
  ans=x*x*x+(p+q+r)*x*x+(p*q+q*r+r*p)*x+p*q*r;
  
  printf("%d",ans);

	return 0;
}
