#include<stdio.h>
int main()
{ 
	int p,q,r,x,ans;
	printf("add three value:");
	scanf("%d%d%d%d",&p,&q,&r,&x);
	ans=x*x*x+(p+q+r)*x*x+(p*q+q*r+r*p)*x+p*q*r;
	printf("%d",ans);
	
	
	return 0;
}
