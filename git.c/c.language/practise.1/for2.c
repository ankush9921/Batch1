#include<stdio.h>                        // Write a C program to find the sum of first 10 natural numbers
int main()                                //The first 10 natural number is :1 2 3 4 5 6 7 8 9 10  // o/p  The Sum is : 55
{
	int x, sum=0;
	printf("The sum of first 10 natural number :\n");
	for(x=1;x<11; x++)
	{
	sum=sum+x;
	printf("%d",x);
	} 
	printf("\n The sum is :%d\n", sum);
	return 0;
}
