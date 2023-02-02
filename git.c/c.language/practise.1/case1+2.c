#include<stdio.h>

int main()
{
	int ch,num1,num2,ans;
	printf("1.Addition\n 2  substraction\n 3 multiplication\n 4 division\n");
	printf("1.please selecte your choice:");
	
	Scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			
		printf("enter number for addition: ");
		scanf("%d%d",&num1,&num2);
		ans=num1+num2;
		printf("%d",ans);
		break;
	}
	


	return 0;
}
