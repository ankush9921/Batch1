#include<stdio.h>
int main()
//{
//	int i,j;
//	for(i=1; i<=10; i++)        //raws
//	{
//		for(j=1; j<=10; j++)    //columns
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int i,j;
//	for(i=1; i<=10; i++)
//	{
//		for(j=1; j<=i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int i,j;
//	for(i=1; i<=5; i++)
//	{
//		for(j=5; j>=i; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//{
//	int i,j,k;
//	for(i=1; i<=10; i++)   //rows
//	{
//		for(j=i; j<10; j++)    //space
//		{
//			printf(" ");
//		}
//		for(k=i; k<=i; k++)   //columns
//		{
//		 printf("*");	
//		}
//		printf("\n");
//	}
//}
{
	int i,j,k;
	for(i=1; i<=10; i++)   //rows
	{
		for(j=i; j<i; j++)    //space
		{
			printf(" ");
		}
		for(k=i; k<=5; k++)   //columns
		{
		 printf("*");	
		}
		printf("\n");
	}
}


