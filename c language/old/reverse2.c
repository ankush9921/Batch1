#include<stdio.h>
int main()
{
	int num=12345679,rem1,rem2,rem3,rem4,rem5,rem6,rem7,rev;
	
	rem1=num%10;//9
	num=num/10;//1234567
	
	rem2=num%10;//7
	num=num/10;//123456
	
	rem3=num%10;//6
	num=num/10;//12345
	
	rem4=num%10;//5
	num=num/10;//1234
	
	rem5=num%10;//4
	num=num/10;//123
	
	rem6=num%10;//3
	num=num/10;//12
	
	rem7=num%10;//2
	num=num/10;//1
	
	rev=rem1*10000000+rem2*1000000+rem3*100000+rem4*10000+rem5*1000+rem6*100+rem7*10+num;
	printf("%d",rev);
	return 0;
}
