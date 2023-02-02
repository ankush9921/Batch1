#include<stdio.h>
int main()
{
//	10 Python Program to Calculate the Volume of cylinder - pi*r*r*h
    float r,h,v;
    printf("enter the volume of cylinder:");
    scanf("%f%f",&r,&h);
    v=(3.14*r*r*h);
    printf("%f",v);
    return 0;
}
