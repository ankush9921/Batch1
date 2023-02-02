#include<stdio.h>

int main()
{
	int num=123456789, run1, run2, run3, run4, run5, run6, run7, run8, rev;
	
	run1=num%10; //9
	num=num/10;  //12345678
	run2=num%10; //8
	num=num/10;  //1234567
	run3=num%10; //7
	num=num/10;  //123456
	run4=num%10; //6
	num=num/10;  //12345
	run5=num%10;  //5
	num=num/10;   //1234
	run6=num%10;  //4
	num=num/10;   //123
	run7=num%10;   //3
	num=num/10;   //12
	run8=num%10;  //2
	num=num/10;   //1
	
	rev=run1*100000000+run2*10000000+run3*1000000+run4*100000+run5*10000+run6*1000+run7*100+run8*10+num;
	
	printf("%d",rev);
    return 0;	
}
