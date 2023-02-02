#include<stdio.h> 
int main()
{
	int num,rem1,rem2,rem3,rem4,rem5,rem6,rev;
	printf("enter the reverse number:");
	scanf("%d",&num);
	rem1=num%10;
	num=num/10;                              
	rem2=num%10;
	num=num/10;
	rem3=num%10;
	num=num/10;
	rem4=num%10;
	num=num/10;
	rem5=num%10;
	num=num/10;      
	rem6=num%10;
	num=num/10; 
	rev=rem1*1000000+rem2*100000+rem3*10000+rem4*1000+rem5*100+rem6*10+num;
	printf("%d",rev);
	return 0;                       
}
