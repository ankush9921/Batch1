#include<stdio.h>
int main()
{
	int num, ans=0;
	printf("Enter a number: ");
	scanf("%d",&num); //789654
	
	while(num>0)//789654>0 -78965>0 -7894>0 -789>0 -78>0 -7>0
	{
		ans++; //1 -2 -3 -4 -5 -6 
		num=num/10; //789456/10=78945    78945/10=7894   7894/10=789  789/10=78  78/10=8  8/10=7 
	}
	printf(" enter the count of number %d",ans);
	return 0;
}

