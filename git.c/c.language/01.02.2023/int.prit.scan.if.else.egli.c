#include<stdio.h>

int main()
{
	int class_conducted;
	int class_attendent;
	
	int per;
	
	printf("EnterTotal numberof class held :");
	scanf("%d",&class_conducted);
	
	printf("Enter total number of class attend :");
	scanf("%d",&class_attendent);
	
	per=(class_attendent*100)/class_conducted;
	
	if(per>75)
	{
		printf("eligible for exam");
	}
	else
	{
		printf("not eligible");
	}	return 0;
}
