// Write a program in C to display n terms of natural number and their sum.Go to the editor
//Test Data : 7
//Expected Output :
//The first 7 natural number is :
//1 2 3 4 5 6 7
//The Sum of Natural Number upto 7 terms : 28
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=7;i++)
	{ 
	sum=sum+i;
		printf("%d\n",i);
	}
	 
	 printf("%d",sum);
	
	
	return 0;
}
