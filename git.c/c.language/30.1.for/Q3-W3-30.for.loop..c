//Write a program in C to read 10 numbers from keyboard and find their sum and average.
//Test Data :
//Input the 10 numbers :
//Number-1 :2
//Number-10 :2
//Expected Output :
//The sum of 10 no is : 55
//The Average is : 5.500000
#include<stdio.h>
int main()
{
	int i,n, sum=0;
	float avg;
	printf("Input the 10 number: ");	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
		printf("enter %d",i);
		scanf("%d",&n);
		sum+=n;
		printf("%d",sum);
	}
	avg=sum/10;
	printf("The sum of 10 no is :%d\n The Average is :%f\n ",avg, sum);

	return 0;	
}
