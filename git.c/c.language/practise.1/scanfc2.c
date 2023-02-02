#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	
	int ans;            //declaration
	
	scanf("%d",&num1);   //address
	scanf("%d",&num2);   //input
	scanf("%d",&num3);
	
	ans=num1-num2-num3;   //logic
	
	printf("%d",ans) ;    //o/p
	
	return 0;
}
