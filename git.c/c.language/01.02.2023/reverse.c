//Python program to reverse a three digit number
#include<stdio.h>

int main()
{	
	 int n=125, rev=0, a,b;
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		
	rev=((a*100)+(b*10)+n);
	printf("\n Reverse of three digit number =%d",rev);
		
	
	return 0;
}
