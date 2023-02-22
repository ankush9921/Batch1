#include<stdio.h>  //7 Python Program to Calculate the Volume of cuboid - l*b*h
float add(float length, float breadth, float height );
int main()
{
	float l, b, h, ans1;
	printf("Enter the volume of Lenngth: ");
	scanf("%f",&l);
	printf("Enter the volume of Breadth: ");
	scanf("%f",&b);
	printf("Enter the volume of height : ");
	scanf("%f",&h);
	ans1=add(l,b,h);
	printf("Calculate the Volume of cuboid :%f",ans1);
	return 0;	
}
float add(float length, float breadth, float height ) 
{   
	float cuboid;
	cuboid=length*breadth*height;
	return cuboid;
}
