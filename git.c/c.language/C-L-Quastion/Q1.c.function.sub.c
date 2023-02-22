//1 Arithmetic programming addition, subtraction, division, multiplication
#include<stdio.h>
int add(int m, int n);

int main()
{
	int a, b, ans1;
	printf("Enter for a element: ");
	scanf("%d",&a);
	printf("Enter for b element :");
	scanf("%d",&b);
	ans1=add(a,b);
	printf("enter for sum value : %d",ans1);

	return 0;
}
int add(int m, int n)
{
	int ans;
	ans=m-n;
	return ans;
}

