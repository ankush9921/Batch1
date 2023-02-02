#include<stdio.h>
int main()
{
	int num=1234567,rem1,rem2,rem3,rem4,rem5,rem6,rev;
	
	
	rem1=num%10;//7
	num=num/10;//123456
	
	rem2=num%10;//6
	num=num/10;//12345
	
	rem3=num%10;//5
	num=num/10;//1234
	
	rem4=num%10;//4
	num=num/10;//123
	
	rem5=num%10;//3
	num=num/10;//12
	
	rem6=num%10;//2
	num=num/10;//1
	
	rev=rem6+rem2;
	printf("%d",rev);
	return 0;
}
