#include<stdio.h>

int main()

{
    int num=12345, sum1, sum2, sum3, sum4, rev;

	sum1=num%10;      //5
	num=num/10;       //1234
	sum2=num%10;    //4
	num=num/10;     //123
	sum3=num%10;      //3
	num=num/10 ;     //12
	sum4=num%10;     //2
	num=num/10;     //1
	
	rev=sum1*10000+sum2*1000+sum3*100+sum4*10+num;
	
	printf("%d",rev);
	
	return 0;
}

