#include<stdio.h>
void add();
 
int main()
{
	add();   //function calling
	return 0;
}

void add()   //function defination/body
{ 
	int a, b, ans;
	printf("Enter value for addition: ");
	scanf("%d%d",&a,&b);
	ans=a+b;
	printf("tolat value: %d",ans);	
}
	
