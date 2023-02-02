//Python Program to swap two variables
#include<stdio.h>

int main()
{
	int a=5;
    int b=10;
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
    return 0;
}
