#include<stdio.h>
int main()
{
	int i,num;
	
	printf("enter number: ");
	scanf("%d",&num);
	
	for(i=1;i<11;i++)
	{
		printf("%d\n",i*num);
		
	}
	
	return 0;
}
