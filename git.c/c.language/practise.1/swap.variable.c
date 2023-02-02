#include<stdio.h>

int main()
{
   int x = 5;
   int y = 10;
   int tem;

   printf("The value of x after swapping:",format(x));
   printf("The value of y after swapping:",format(y));
   
   tem=x;                                           // To take inputs from the user
   x=y;                                            //x = input('Enter value of x: ')
   y=tem;
	                                            //y = input('Enter value of y: ')
  printf("%d",tem);
return 0;
}

