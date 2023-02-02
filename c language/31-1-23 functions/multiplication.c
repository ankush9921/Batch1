#include<stdio.h>
void mul();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&b);

	mul(a,b);
	return 0;
}

void mul(int x,int y)
{
	int ans;
	ans=x*y;
	printf("Answer - %d  \n",ans);
}

