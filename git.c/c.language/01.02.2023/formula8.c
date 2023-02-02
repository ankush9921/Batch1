#include<stdio.h>

int main()
{
  int a=50;
  int b=60;
  int c=3;
 
  int ans;
  ans=a*a*a+c*a*a*b+c*a*b*c*a*b+b*b*b;
  
  printf("%d",ans);

	return 0;
}
