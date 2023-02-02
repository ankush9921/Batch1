//Program to Calculate (a+b)2  and (a-b)2
#include<stdio.h>
int main()
{  
  int a,b,ans;
  printf("enter the value of a\n: ");
  scanf("%d",&a);
  printf("enter the value of b\n: ");
  scanf("%d",&b);
  
  ans=a*a+2*a*b+b*b;
  
  printf("%d",ans);
	
	
	
	
	return 0;
}
