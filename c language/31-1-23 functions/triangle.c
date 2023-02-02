#include<stdio.h>
void tri();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&b);

	tri(a,b);
	return 0;
}

void tri(int x,int y)
{
	int ans;
	ans=0.5*x*y;
	printf("Answer - %d  \n",ans);
}

