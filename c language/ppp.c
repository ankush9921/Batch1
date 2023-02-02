#include<stdio.h>
int main()
{
	int num,rem1,rem2,rem3,rev;
	printf("enter the three digit number:");
	scanf("%d",&num);  //3456
	rem1=num%10;//3
	num=num/10; //45
	rem2=num%10; 
	num=num/10;
	rem3=num%10;
	num=num/10;
	rev=rem1*1000+rem2*100+rem3*10+num;
	printf("%d",rev);
	
	return 0;
}
