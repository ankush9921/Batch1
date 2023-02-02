//Take values of length and breadth of a rectangle from user and check if it is square or not
#include<stdio.h>

int main()
{
	float length, breadth, area;
	
	printf("Enter length of rectangle\n");
	scanf("%f",&length);
	printf("Enter breadth of rectangle\n");
	scanf("%f",&breadth);
	
	area = length * breadth;
	
	printf("Area of Rectangle is %f\n", area);
	
	return 0;
}
