

#include<stdio.h>
int main()
{
	int n,arr[1000],i;
	int ans=0;
	printf("Input the number of elements to be stored in the array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		ans=ans+arr[i];
		printf("\t%d",arr[i]);
		
	}
		printf("\n%d",ans);
	return 0;
}
