#include<stdio.h>

int main()
{
	char ch1=10;
	char ch2=20;
	char ch3=30;
	char ch4=40;
	
	char ans;
	
	printf("enter four for charecter :");
	
	scanf("%c\n%c\n%c\n%c",&ch1,&ch2,&ch3,&ch4);
	
	ans=ch1,ch2,ch3,ch4;
	
	printf("%c",ch1,ch2,ch3,ch4);
	
	return 0;
}
