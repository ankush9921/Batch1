#include<stdio.h>
void add();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&b);

	add(a);
	return 0;
}

void add(int s)
{
	int ans;
	ans=s*s*s;
	printf("Answer - %d  \n",ans);
}

