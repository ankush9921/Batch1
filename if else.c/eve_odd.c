#include<stdio.h>
int main()
{


//Write a C program to check whether a given number is even or odd. Go to the editor
//Expected Output :
//15 is an odd integer
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    if (n%2==0)
    {
    	printf("it is a even value");
	}
	else
	{
		printf("it is odd value");
	}
	return 0;
	
}  
