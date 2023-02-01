#include<stdio.h>
void add();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&b);

	add(a,b);
	return 0;
}

void add(int x,int y)
{
	int ans;
	ans=x+y;
	printf("%d  \n",ans);
}

