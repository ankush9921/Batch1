#include<stdio.h>
int add(a,b);

int main()
{
	int a=10, b=20, c=50, ans1, ans2;
	ans1=add(a,b);
	ans2=add(ans1,c);
	
	printf("enter the addition: %d\nenter for value: %d", ans1,ans2);
	return 0;
}
int add(int x, int y)
{
	int ans;
	ans=x+y;
	return ans;
}
