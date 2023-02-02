#include<stdio.h>
int main()
{
	int num,rem1,rem2,rev,rev2;
	printf("enter the value:");
	scanf("%d",&num);
	rem1=num%10;//123  rem=3
	num=num/10;//12
	rem2=num%10;//rem=2
	num=num/10;// 1
	rev=rem1;
	rev2=num;
	printf("%d%d",rev,rev2);
	return 0;
	
}
