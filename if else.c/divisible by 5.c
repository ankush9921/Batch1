#include<stdio.h>
int main()
{  
    //take post integer input and tell is divisible by 5 or not 
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	if(n%5==0)
	{
		printf(" divisible by 5:");
	}
	else
	{
		printf("not divisible by 5:");
	}
	return 0;
}
