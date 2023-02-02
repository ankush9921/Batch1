#include<stdio.h>
int main()
{
	int num=123, n1, m2, rev;
	printf("enter the reverse a three digit number:\n");
	n1=num%10;   //3
	num=num/10;  //12
	m2=num%10;   //2
	num=num/10;  //1
	rev=n1*100+m2*10+rev+num;
	printf("%d",rev);

}
