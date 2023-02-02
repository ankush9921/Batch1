#include<stdio.h>
int main()
{
	int held,attend,per;
	printf("enter the number:");
	scanf("%d%d",&held,&attend);
	per=held/attend*100;
	if(per<75)
	{
		printf("a atudent allowed sit in exam %d",per);
	}
	if(per>75)
	{
		printf("a student not allowed sit in exam %d,per");
	}
	return 0;
}
