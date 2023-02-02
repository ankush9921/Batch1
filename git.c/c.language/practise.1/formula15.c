#include<stdio.h>

int main()
{
  int a=11;
  int b=46;
  int c=8;
 
  int ans;
  ans=(a-b)*(a-b)*(a-b)+c*a*b*(a-b);
  
  printf("%d",ans);

	return 0;
}
