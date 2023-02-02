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

void add(int r,int h)
{
	int ans;
	ans=(3.14*r*r*h)/3;
	printf("Answer - %d  \n",ans);
}

