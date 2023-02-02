#include<stdio.h>
int main()
{ 
int i;
int arr[10], ans1, ans2;
for(i=1; i<=10;i++)
{
	printf("Enter the number : ");
	scanf("%d",&arr[i]);
}

for(i=1; i<=10;i++)
{
	if(i%2==0)	
	{
	printf("%d is even number \n : ", ans1);
	ans1=ans1+arr[i];
	}
}	
else 
  {
	printf("%d is odd number \n : ", ans2);
	ans2=ans2+arr[i];	
  }	
}
printf("%d\n%d",ans1, ans2);
	return 0;
}
