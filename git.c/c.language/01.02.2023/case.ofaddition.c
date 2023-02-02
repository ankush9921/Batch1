#include<stdio.h>

int main()
{
	int ch,num1,num2,ans;
	printf("1. Addition\n2,  substraction\n3, multiplication\n4, division\n");
	printf("1. please selecte your choice : ");
	
	scanf("%d",&ch);  //2   
	
	switch(ch)
	{
		case 1:
		printf("enter number for addition: ");
		scanf("%d%d",&num1,&num2);
		ans=num1+num2;
		printf("%d",ans);
		break;
		
		case 2:
		printf("enter number for substraction :");
		scanf("%d%d",&num1,&num2);
		ans=num1-num2;
		printf("%d",ans);
		break;
		
		case 3:
		printf("enter number for multiplication :");
		scanf("%d%d",&num1,&num2);
		ans=num1*num2;
		printf("%d",ans);
		break;
		
	    case 4:
		printf("enter number for division :");
		scanf("%d%d",&num1,&num2);
		ans=num1/num2;
		printf("%d",ans);
		break;
	
		
	}
	


	return 0;
}
