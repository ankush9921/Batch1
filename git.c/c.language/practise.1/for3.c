#include<stdio.h>   //Write a program in C to display n terms of natural number and their sum
void main()          //Test Data : 7   //The first 7 natural number is :1 2 3 4 5 6 7  // o/pThe Sum of Natural Number upto 7 terms : 28
{	int a, n, sum=0;
    
    printf(" Input value of terms: ");
    scanf("%d",&n);
	printf("\n The first %d natural numbers are:\n",n);
		
	for(a=1; a<n; a++)
	{
	printf("%d\n",a);	
	sum+=a;
	}
	printf("The sum of natural numbers upto 7 terms:\n",n,sum);
	
}
