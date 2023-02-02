//swap two num without using 3rd num
#include<stdio.h>
int main()
{   int a=5;
    int b=8;
    
    a=a+b;//5+8=13
    b=a-b;//13-8=5
    a=a-b;//13-5=8
    
    printf("%d\t%d",a,b);
    
	return 0;
}
