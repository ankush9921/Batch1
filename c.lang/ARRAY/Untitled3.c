#include<stdio.h>
int main()
{   //even and odd num  and addition
    int i,ans1=0,ans2=0;
    int arr[10];
    for(i=1;i<=10;i++)
    {
    	printf("Enter the number: ");
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{   
			printf("%d even num\n",arr[i]);
			ans1=ans1+arr[i];
		    
		}
		else
		{
			printf("%d odd num\n",arr[i]);
			ans2=ans2+arr[i];
				
		}
	}
	
	printf("addition for even %d\n",ans1);
	printf("addtion for odd %d\n",ans2);
	
	return 0;
}
