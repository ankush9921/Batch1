#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},
	ans=0; 
	int i;
	for(i=0;i<5;i++)
	{
		ans=ans+arr[i];
	}
	printf("%d",ans);
}
