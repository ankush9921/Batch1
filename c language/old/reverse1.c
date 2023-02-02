#include<stdio.h>
int main()
{
	int num=12345,rem1,rem2,rem3,rem4,rev;
	
	rem1=num%10;//5
	num=num/10;//1234
	
	rem2=num%10;//4
	num=num/10;//123
	
	rem3=num%10;//3
	num=num/10;//12
	
	rem4=num%10;//2
	num=num/10;//1
	
	rev=rem1*10000+rem2*1000+rem3*100+rem4*10+num;
	printf("%d",rev);
	return 0;
}
