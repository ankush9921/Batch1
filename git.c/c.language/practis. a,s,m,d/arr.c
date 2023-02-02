#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i, ans=0;
	
	for(i=0;i<5; i++) //i=0  1  2
	{
		ans=ans+arr[i];  //1  3  6 10  15 
	}
	printf("%d",ans);



//	int arr[5]={1,2,3,4,5}, i, ans=0;
//	for(i=0 ; i<5; i++)
//	{
//		ans=ans+arr[i];
//	}
//	printf("%d", ans);



//	int arr[5]={1,2,3,4,5}, i, ans=0;      //output=15
//	for(i=0; i<5; i++)
//	{
//		ans=ans+arr[i];
//	}
//	printf("%d", ans);

//	int arr[9]={1,2,3,4,5,6,7,8,9},i,ans=0;   //output=45
//	for(i=0; i<9; i++)   //i=0  1  2
//	{
//		ans=ans+arr[i];   // 1  3      
//	}
//	printf("%d",ans);
	return 0;
}
