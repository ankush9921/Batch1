#include<stdio.h>
int main()
{
   	int a,b,ans;
   	printf("enter two num: ");
   	scanf("%d%d",&a,&b);
   	ans=(a+b)*(a+b)-2*a*b;
   	printf("%d",ans);
	
	return 0;
}
