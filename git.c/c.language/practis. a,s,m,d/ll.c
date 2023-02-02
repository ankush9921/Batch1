#include<stdio.h>
int main()
{
	int arr[6], i;
	
	scanf("d",&arr[0]);
	scanf("d",&arr[1]);
	scanf("d",&arr[2]);
	scanf("d",&arr[3]);
	scanf("d",&arr[4]);
	scanf("d",&arr[5]);
	
	for(i=0; i<6; i++) //1, 2, 3 , 4 ,5 , 6
	{
		scanf("d",&arr[i]);   //10, 20
	}
	printf("%d",arr[i]);  //return return printf karna padega 6 time
	printf("%d",arr[i]);
	printf("%d",arr[i]);
	printf("%d",arr[i]);
	printf("%d",arr[i]);
	printf("%d",arr[i]);
	
	return 0;
}
