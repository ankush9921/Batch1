#include<stdio.h> //8 Python Program to Calculate the Volume of cube - s*s*s
float add(float side);

int main()
{
	float s, ans1;
	printf("Enter the Volume of cube: ");
	scanf("%f",&s);
	ans1=add(s);
	printf("Calculate the Volume of cube: %f ", ans1);
	return 0;
}
float add(float side)
	{
	float cube;
	cube=side*side*side;
	return cube;
	}
