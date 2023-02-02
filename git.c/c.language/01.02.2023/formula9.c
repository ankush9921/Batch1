#include<stdio.h>

int main()
{
  int a=10;
  int b=123;
  int c=3;
 
  int ans;
  ans=a*a*a+b*b*b+c*a*b*(a+b);
  
  printf("%d",ans);

	return 0;
}
