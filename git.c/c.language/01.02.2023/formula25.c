#include<stdio.h>

int main()
{
  int a=70;
  int b=80;
  int c=60;
 
  int ans;
  ans=(b-c)*(c*a)*(a-b)*(a+b+c);
  
  printf("%d",ans);

	return 0;
}
