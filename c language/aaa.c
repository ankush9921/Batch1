#include<stdio.h>
int main()
{
	int num,x1,x2,rev;//declaration
	printf("enter the value:"); //message
	scanf("%d",&num);//123
	x1=num%10;//3
	
	num=num/10;//12
	
	x2=num%10;// 2
	 
	num=num/10;//1
	rev=x1*100+x2*10+num;
	printf("%d",rev);
	return 0;
	
}
