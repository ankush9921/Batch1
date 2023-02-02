#include<stdio.h>

int main()
{
	
	int no1;
	int no2;
	int no3;
	
	int ans;                                            //declaration
	
	printf("enter three value for addition:");           //o/p
	
	scanf("%d\n%d",&no1,&no2,&no3);                      //address ans input
	
	ans = no1+no2-no3;                                   //logic
	
	printf("%d",ans);                                     //o/p
	
	return 0;
	
}
