#include<stdio.h>
int main()
{
	int a[5];
	int i;
	
	printf("enter array elements: ");
	for(i=0; i<5; i++)
	{
		scanf("%d", & a[i] );
	}
     	printf("array elements: ");
		for(i=0; i<5; i++)
		{
			printf("%d",a[i]);
		}
		return 0;
		
}
