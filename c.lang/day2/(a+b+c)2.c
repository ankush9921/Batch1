#include<stdio.h>
int main()
{
	int a,b,c,ans;
	printf("add three num : ");
	scanf("%d%d%d",&a,&b,&c);
	ans=(a*a+b*b+c*c)+2*(a*b+b*c+c*a);
	printf("%d",ans);
	
	
	
	
	
	return 0;
}
