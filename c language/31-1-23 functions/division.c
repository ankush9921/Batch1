#include<stdio.h>
void div();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&b);

	div(a,b);
	return 0;
}

void div(int x,int y)
{
	int ans;
	ans=x/y;
	printf("Answer - %d  \n",ans);
}

