#include<stdio.h>

int main()
{
  int a=40;
  int b=13;
  int c=50;
  int v=3;
 
  int ans;
  ans=a*a*a+b*b*b+c*c*c+v*(a+b)*(b+c)*(c+a);
  
  printf("%d",ans);

return   0;
}
