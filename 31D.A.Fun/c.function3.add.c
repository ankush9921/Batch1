#include<stdio.h>
void add(); //function declaration

int main()
{
	add();
	add();
	add();
	add();
	return 0;
}
void add ()
{
	int a, b, ans;
	a=10;
	b=20;
	ans=a+b;
	printf("%d\n",ans);
}
