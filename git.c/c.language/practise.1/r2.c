#include<stdio.h>
//Python program to reverse a seven digit number
int main()
{
	int num=1234567, s1, s2, s3, s4, s5, s6, rev;
    s1=num%10;   //7
	num=num/10;  //123456 
	s2=num%10;   //6
	num=num/10;  //12345
	s3=num%10;   //5
	num=num/10;  //1234
	s4=num%10;   //4
	num=num/10;  //123
	s5=num%10;   //3
	num=num/10;  //12
	s6=num%10;   //2
	num=num/10;  //1
	rev=s1*1000000+s2*100000+s3*10000+s4*1000+s5*100+s6*10+num;
	printf("%d\n",rev);
	
	rev=(s6+s4+s2);
	printf("%d\n",rev);
	
	rev=(num-s5)+(s3-s1);
	printf("%d\n",rev);

	rev=s6*s4*s2;
	printf("%d\n",rev);
	
	rev=(num/s5)+(s3/s1);
	printf("%d",rev);
	return 0;
}
