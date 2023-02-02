#include<stdio.h>
int add(int x,int y);
int main()
{
    int a,b,ans;
	printf("enter the value a: ");
	scanf("%d",&a);	
	printf("enter the value b: ");
	scanf("%d",&b);	
    ans=add(a,b);
	
	return 0;
}
int add(int x,int y)
{
	int ans;
	ans=x/y;
	return ans;
}
