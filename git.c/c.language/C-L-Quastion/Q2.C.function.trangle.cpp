//2 Python Program to Calculate the Area of a Triangle    -    0.5*b*h
#include<stdio.h>
float add(float m, float n);

int  main()
{
	float a, b, c, ans1, ans2;
	printf("Enter for a element: ");
	scanf("%f",&a);
	printf("Enter for b element :");
	scanf("%f",&b);
	printf("Enter for a element: ");
	scanf("%f",&c);
	ans1=add(a,b);
	ans2=add(ans1,c);
	printf("enter for sum value : %f\t%f",ans1);
	printf("enter for sum value : %f\t%f",ans2);
	return 0;
}
float add(float m, float n)
{
	float ans;
	ans=m*n;
	return ans;
}
