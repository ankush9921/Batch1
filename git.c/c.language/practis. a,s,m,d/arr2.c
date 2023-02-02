#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i, ans=1;
	
	for(i=0; i<5; i++)
	{
		ans=ans*arr[i];
	}
	printf("%d",ans);
	
	return 0;
}
