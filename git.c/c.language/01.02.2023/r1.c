#include<stdio.h>

int main()
{
	int num=12345, n1, n2, n3, n4, rev;
	n1=num%10;      //5
	num=num/10;     //1234
	n2=num%10;      //4
	num=num/10;     //123
	n3=num%10;      //3
	num=num/10;     //12
	n4=num%10;      //2
	num=num/10;     //1
	
	rev=n1*10000+n2*1000+n3*100+n4*10+num;
	printf("%d",rev);
	
	return 0;
}
