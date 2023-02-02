#include<stdio.h>
int main()
{
   int a,b,c,ans;
  printf("enter three  num:");
  scanf("%d%d%d",&a,&b,&c);
  ans=((a+b+c)/2)*((a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a));
  printf("%d",ans);	
	
	
	
	
	return 0;
}
