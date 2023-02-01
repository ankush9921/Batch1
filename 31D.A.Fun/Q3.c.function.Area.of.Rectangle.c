#include<stdio.h>//3 Python Program to Calculate the Area of Rectangle - l*b
float add(float length, float breath);

int main()
{
	float l, b, ans1;
	printf("Calculate the Area of length : ");
	scanf("%f",&l);
	printf("Calculate the Area of breath :");
	scanf("%f",&b);
	ans1=add(l,b);
	printf("Calculate the Area of Rectangle : %f ",ans1);
	return 0;	
}
float add(float length, float breath)
{
	float ans;
	ans=length*breadth;
	return ans;
}
	
