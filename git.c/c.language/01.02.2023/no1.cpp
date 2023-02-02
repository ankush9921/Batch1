//Python program to reverse a three digit number
#include<stdio.h>

int main()
{
	int num=123, ren1, ren2, rev;
	
	ren1=num%10;   //3
    num=num/10;    //12
	 
	ren2=num%10;  //2
	num=num/10;   //1
	
	rev=ren1*100+ren2*10+num;
	printf("%d",rev);
	
return 0;
} 
