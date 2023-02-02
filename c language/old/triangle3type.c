//Write a Python program to check a triangle is . 
//Note :
///An equilateral triangle is a triangle in which all three sides are equal.
//A scalene triangle is a triangle that has three unequal sides.
//An isosceles triangle is a triangle with (at least) two equal sides.


#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter a : ");
    scanf("%d",&a);
    printf ("Enter b : ");
    scanf("%d",&b);
	printf ("Enter c : ");
    scanf("%d",&c);
	
	if(a==b && b==c && c==a) 
	{
		printf("equilateral triangle ");
	}
	else if(a==b && b==a && c)
	{
		printf("isosceles triangle ");
	}
	else
	{
		printf("scalene triangle ");
	}
	return 0;
}
