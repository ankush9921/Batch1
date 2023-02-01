#include<stdio.h>
void add();
//call by volue
int main()
{
	int a,b;
	printf("Enter value for addition : ");
	scanf("%d%d",&a, &b);    //10 20
	add(a,b);
//	add(50,50);
	return 0;
}

void add(int x, int y)   //function defination/body
{
	int ans;
	ans=x+y;
	printf("%d\n", ans);
}
	
	
