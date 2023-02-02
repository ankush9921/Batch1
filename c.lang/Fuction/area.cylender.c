#include<stdio.h>
int add(int x,int y);

int main()
{
	int a,b,add1;
	printf("enter the value: ");
	scanf("%d%d",&a,&b);
	add1=add(a,b);
	printf(" area of cylinder %d",add1);
	
}
int add(int x,int y)
{
	int ans;
	ans=3.14*x*y;
	return ans;
}
