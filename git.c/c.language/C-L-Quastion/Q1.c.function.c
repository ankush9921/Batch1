//1 Arithmetic programming addition, subtraction, division, multiplication
#include<stdio.h>
void add();

int main()
{
	int a, b;
	printf("Enter for a element: ");
	scanf("%d",&a);
	printf("Enter for b element :");
	scanf("%d",&b);
	add(a,b);
	return 0;
}
void add(int a, int b)
{
	int ans;
	ans=a+b;
	printf("enter for sum value : %d",ans);
}
