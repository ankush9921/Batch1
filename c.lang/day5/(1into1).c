#include<stdio.h>
int main()
{
	int a,logic;
    printf("enter the vlue: ");
    scanf("%d",&a);
    if(a>0)
    {
    	printf("%d",a);
    }
    else
    {
    	logic=a*(-1);
    	printf("%d",logic);
	}
  
  
	return 0;
}
