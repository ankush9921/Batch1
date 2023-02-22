#include<stdio.h>//5 Python Program to Calculate the Area of Circle - pi=3.1452 r*r
float add(float pay, float readius);

int main()
{
	float pi=3.14, r=15, ans1;
	printf("\nCalculate the Area of Circle: ");
	ans1=add(pi,r);
	printf("%f",ans1);
	return 0;
}
float add(float pay, float readius)
	{
	float circle;
	circle=pay*readius*readius;
	return circle;
	}   //output-706.5
