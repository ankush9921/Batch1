#include<stdio.h>

int main()
{
  int a=40;
  int b=43;
  int c=10;
  int v=3;
 
  int ans;
  ans=a*a*a+b*b*b+c*c*c+3*(a+b)*(b+c)*(c+a);
  
  printf("%d",ans);


return   0;

