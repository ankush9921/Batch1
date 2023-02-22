#include<stdio.h>//**10 Python Program to Calculate the Volume of cylinder - pi*r*r*h
float add(float pay, float readius, float height);
int main()
{
	float pi,r,h,add1;      //pi-3.14   r-38    h-35
	printf("Enter the volume of Cylinder:\n ");
	scanf("%f\n%f\n%f",&pi,&r,&h);
	add1=add(pi,r,h);
	printf("Calculate the Volume of Cylinder: %f",add1);	
	return 0;
}
float add(float pay, float readius, float height)
    {
	float cylinder;
	cylinder=pay*readius*readius*height;        
	return cylinder;
	}

