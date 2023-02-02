#include<stdio.h>
int main()
{
//	Write a program in C to display sum 10 natural numbers. Go to the editor
//Expected Output :
//1 2 3 4 5 6 7 8 9 10
    
    int i,sum=0;
    printf("enter the number: \n");
    for(i=1;i<11;i++)

	{ 
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;



}
