#include<stdio.h>//11.Write a program in C to swap two numbers using function
void add(int x, int y);

int main()
{
	int z,w, ans1;
	printf("\n\n Function : swap two numbers using function :\n");
    printf("Input 1st number : ");
	scanf("%d",&z);
	printf("Input 2st number : ");
	scanf("%d",&w);

	ans1=add(z,w);
	printf("swap two variables: %d"ans1);
	return 0;
}
void add(int x, int y)
	{
	int swap;
	swap=x;
	x=y;
	y=swap;
	return swap;
}
