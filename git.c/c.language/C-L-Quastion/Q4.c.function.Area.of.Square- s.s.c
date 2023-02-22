#include<stdio.h>  //4 Python Program to Calculate the Area of Square - s*s
float add(float size);
 
int main()
{
	float s, ans1;
	printf("Calculate the Area of Square:");
	scanf("%f",&s);
	ans1=add(s);
	printf("%f",ans1);
	
	return 0;
}

float add(float size)                                                 //function defination/body
{ 
	float area;
	area=size*size;
	return area;
}

