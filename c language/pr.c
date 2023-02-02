#include<stdio.h>
int main()
{
	int a,b,c,rev;			// decleration 
	
	printf("enter the five digit number:");			// massage
	scanf("%d",&a);			// input      34567
	
	b=a%10;//   743%10=3
	a=a/10;//	743/10=74
	c=a%10;//	74%10=4
	a=a/10;// 	74/10=7
	
	rev=b*100+c*10+a;
	
	printf("%d",rev);
	return 0;
}
	
