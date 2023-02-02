#include<stdio.h>

int main()
{
  int a=10;
  int b=20;
  int c=30;
  int d=2;
 
  int ans;
  ans=(a+b+c)*(a+b+c)-2*(a*b+b*c+c*a);
  
  printf("%d",ans);

	return 0;
}
