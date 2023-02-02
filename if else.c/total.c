#include<stdio.h>
int main()
{
//	Write a program in C to display n terms of natural number and their sum.Go to the editor

//The first 7 natural number is :
//The Sum of Natural Number upto 7 terms : 28
   int i,sum=0;
    printf("enter the number: \n");
    for(i=1;i<8;i++)

	{ 
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;



}
