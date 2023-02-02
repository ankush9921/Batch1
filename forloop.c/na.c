#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("enter the natural number:/n");
	for(i=1;i<=10;i++)
	{
		printf("%d:",i);
		scanf("%d",&n);
		sum+=n;
	}
	 avg=sum/10.0;
	 printf("%d%f",sum,avg);
	 
	  return 0;
	
	
	
	
	
}
