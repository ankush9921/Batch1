#include<stdio.h>
int main()
{
	int num, ans=0;
	printf("enter the 9 elements: ");
	scanf("%d",&num);      //891011234
	
	while(num>0)         //891011234>0   89101123>0  8910112>0   891011>0 --------------    
	{
		ans++;          //4,3,2,1,1,0,1,9,8
		num=num/10;//891011234/10=89101123  89101123/10=8910112  8910112/10=891011  891011/10=89101  89101/10=8910  8910/10=891  891/10=89  89/10=9  9/10=8  8/10=0
	}
	printf("Enter the count of number: %d\n",ans);
	return 0;
}
