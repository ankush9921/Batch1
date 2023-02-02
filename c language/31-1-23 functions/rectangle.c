#include<stdio.h>
void rec();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&b);

	rec(a,b);
	return 0;
}

void rec(int l,int b)
{
	int ans;
	ans=l*b;
	printf("Answer - %d  \n",ans);
}

