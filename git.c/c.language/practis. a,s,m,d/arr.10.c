#include<stdio.h>
int main()
{
	int i;
	int arr[5];
	int ans;
	
	for(i=0; i<5; i++)
	{
		printf("\n elements : ");
		scanf("%d",& arr[i]);
		ans=ans-arr[i];
	}
    	printf("\n enter in array are:");
    	for(i=0; i<10; i++)
	{
	   printf("%d\n", ans);
	   
    }

	return 0;
}
