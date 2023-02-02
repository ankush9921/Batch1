#include<stdio.h>
int main()
{
   //Write a program in C to display n terms of natural number and their sum.Go to the editor
//Test Data : 7
//Expected Output :
//The first 7 natural number is :
//1 2 3 4 5 6 7
//The Sum of Natural Number upto 7 terms : 28
//Click me to see the solution
     int i,n,sum=0;
     printf("enter the  number:\n");
     scanf("%d",&n);
     printf("enter the number:", n);
     for(i=1;i<=n;i++)
     {

     	printf("%d",i);
     	sum+=i;
	 }
	 printf("%d",n,sum);

    return 0;
}

