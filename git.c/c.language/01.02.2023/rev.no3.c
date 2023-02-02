#include<stdio.h>

int main()
{
	int num=1234567, run1, run2, run3, run4, run5, run6, rev;
	
	run1=num%10; //7
	num=num/10;  //123456
	run2=num%10; //6
	num=num/10;  //12345
	run3=num%10; //5
	num=num/10;  //1234
	run4=num%10; //4
	num=num/10;  //123
	run5=num%10;  //3
	num=num/10;   //12
	run6=num%10;  //2
	num=num/10;   //1
	
	rev=run1*1000000+run2*100000+run3*10000+run4*1000+run5*100+run6*10+num;
	
	printf("%d",rev);
	
	return 0;
}
