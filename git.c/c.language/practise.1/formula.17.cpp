#include<stdio.h>

int main()
{
  int a=11;
  int b=46;
  int c=10;
 
  int ans;
  ans=(a+b+c)*(a*a+b*b+c*c-a*b-b*c-c*a);
  
  printf("%d",ans);

	return 0;
}
