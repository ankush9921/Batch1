#include<stdio.h>
int main()
{
  int a,b,c,ans;
  printf("enter three  num:");
  scanf("%d%d%d",&a,&b,&c);
  ans=a*a*a+b*b*b+c*c*c+3*(a+b)*(b+c)*(c+a);
  printf("%d",ans);	
	
	
	
	return 0;
}
