//11 Write a Python program to check a triangle is . 
//Note :
//An equilateral triangle is a triangle in which all three sides are equal.
//A scalene triangle is a triangle that has three unequal sides.
//An isosceles triangle is a triangle with (at least) two equal sides.


#include<stdio.h>
int main()
{
	int s1,s2,s3;
	
	printf("Enter the value of 3 side=");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1==s2 && s2==s3 && s1==s3)
	{
		printf("It is An equilateral triangle.\n");
		printf("it is also an isosceles triangle.");
	}
	else if(s1!=s2 && s1!=s3 && s2!=s3)
	{
		printf("It is An scalene triangle.");
	}
	else if (s1==s2 || s1==s3 || s2==s3)
	{
		printf("it is an isosceles triangle.");
	}
	
	return 0;
}
