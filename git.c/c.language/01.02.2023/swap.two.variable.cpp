#include<stdio.h>//11 Python Program to swap two variables
int add(int x, int y);

int main()
{
	int z,w, ans1;
	printf("Enter the swap for variables: ");
	scanf("%d",&z,&w);
	ans1=add(z,w);
	printf("swap two variables: %d"ans1);
	return 0;
}
int add(int x, int y)
	{
	int swap;
	swap=y;
	y=x;
	x=swap;
	return swap;
}	


