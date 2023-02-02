#include<stdio.h>

int main()
{
  int a=10;
  int b=20;
  int c=30;
 
  int ans;
  ans=1/2*(a+b+c)*[(a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a)];
  
  printf("%d",ans);

	return 0;
}
