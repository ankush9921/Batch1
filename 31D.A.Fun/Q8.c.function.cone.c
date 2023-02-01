#include<stdio.h> //9 Python Program to Calculate the Volume of cone - (pi*r*r*h)/3
float add(float pay, float length, float height);
int main()
{
	float pi,r,h,ans1;      //pi-3.14   r-5    h-10
	printf("Enter the volume of cone:\n ");
	printf("Enter the volume of pay: ");
	scanf("%f",&pi);
	printf("Enter the volume of readius: ");
	scanf("%f",&r);
	printf("Enter the volume of height: ");
	scanf("%f",&h);
	ans1=add(pi,r,h);
	printf("Calculate the Volume of cone: %f",ans1);	
	return 0;
}
float add(float pay, float readius, float height)
    {
	float cone;
	cone=pay*readius*readius*height/3;        
	return cone;
	}	
