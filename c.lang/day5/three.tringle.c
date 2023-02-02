//11 Write a Python program to check a triangle is . 
//Note :
//An equilateral triangle is a triangle in which all three sides are equal.
//A scalene triangle is a triangle that has three unequal sides.
//An isosceles triangle is a triangle with (at least) two equal sides.
#include<stdio.h>
int main()
{  
   int a,b,c;
   printf("enter the sides: ");
   scanf("%d%d%d",&a,&b,&c);
   
   if(a == b == c)
   {
   	printf("the tringl is equilateral");
   	
   }
   else if(a==b || b==c || a==c)
   {
   	printf("the tringle is scalene");
   }
	else
	{
		printf("tringle is isoscles");
		   }   	
	
	
	return 0;
}
