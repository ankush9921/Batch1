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
for(i=1; i<10;i++)

	if(i%2==0)
{
	printf("%d is even number\n : ", arr[i]);
}
else 
{
	printf("%d is odd number\n : ", arr[i]);
}
		
	
	return 0;
}
