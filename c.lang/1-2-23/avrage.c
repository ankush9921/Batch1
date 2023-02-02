#include<stdio.h>
int main()
{
	int i,n,sum=0,avr;
    
    printf("enter the num: ");
    for(i=0;i<=10;i++)
    {
    	scanf("%d",&n);
	}
		for(i=1;i<10;i++)
		{
		  	printf("%d",i);
		}
		for(i=0;i<10;i++)
		{
			sum=sum+i;
			printf("%d",sum);
		}
		return 0;
}
