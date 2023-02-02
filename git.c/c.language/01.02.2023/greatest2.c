#include<stdio.h>

int main()
{
	int num1,num2,big;
	
	printf("enter first value : ");
	scanf("%d",&num1);
	printf("enter second value  ");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		big=num1;
		printf("the first value is big %d", big);
	}
   else
   {
     	big=num2;
     	printf("the second value is big %d", big);
   }
   return 0;
}
