//Write a program in C to display n terms of natural number and their sum.Go to the editor
//Test Data : 7
//Expected Output :
//The first 7 natural number is :
//1 2 3 4 5 6 7
//The Sum of Natural Number upto 7 terms : 28
#include<stdio.h>
	int main()
	{
		int i, n, sum=0;
		printf("The first 7 natural number is:");
		scanf("%d",&n);
		printf("Enter n value :%d\n",n);
		for(i=1; i<=n; i++)	
		{
		 printf("\nEnter i value :%d\n",i);
		 sum=sum+i;
		}
		printf("The Sum of Natural Number upto 7 terms :%d",sum);
		return 0;
	}
