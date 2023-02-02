#include<stdio.h>
int main()
{   
    int i,ans=0;
    int arr[i];
    for(i=0;i<=10;i++)
    {
    	printf("Enter the number: ");
		scanf("%d",&i);
	}
	for(i=1;i<10;i++)
	{
		if(i%2==0)
		{   
			printf("\n%d even num",i);
			ans=ans+arr[i];
		    printf("%d",ans);
		}
		else
		{
		printf("\n%d odd num",i);
		ans=ans+arr[i];
		printf("%d",ans);	
		}
	}
	
	
	
	return 0;
}
