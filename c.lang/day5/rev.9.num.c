#include<stdio.h>
int main()
{
    int num=123456789,rem1,rem2,rem3,rem4,rem5,rem6,rem7,rem8,rev;
  	rem1=num%10;//r=9
    num=num/10;//12345678
    rem2=num%10;//rem=8
    num=num/10;//1234567
    rem3=num%10;//rem=7
    num=num/10;//123456
    rem4=num%10;//rem=6
    num=num/10;//12345
	rem5=num%10;//rem=5
	num=num/10;//1234
	rem6=num%10;//rem=4
	num=num/10;//123
	rem7=num%10;//rem=3
	num=num/10;//12
	rem8=num%10;//rem=2
	num=num/10;//1
	rev=rem1*100000000+rem2*10000000+rem3*1000000+rem4*100000+rem5*10000+rem6*1000+rem7*100+rem8*10+num;
	printf("%d",rev);
	
	return 0;
}
