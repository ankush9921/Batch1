#include<stdio.h>

int main()
{
  int a=90;
  int b=80;
  int c=70;
 
  int ans;
  ans=(b-c)*(c-a)*(a-b)*(b+c)*(c+a)*(a+b);
  
  printf("%d",ans);

	return 0;
}
