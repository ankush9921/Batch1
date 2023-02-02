#include<stdio.h>

int main()
{
  int a=789;
  int b=456;
  int c=123;
 
  int ans;
  ans=(a+b+c)*(a*b+b*c+c*a);
  
  printf("%d",ans);

	return 0;
}
