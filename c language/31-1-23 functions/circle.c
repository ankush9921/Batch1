#include<stdio.h>
void cir();

int main()
{
	
	int a,b;
    printf("Enter 1st number:  ");
    scanf("%d",&a);
    
    printf("Enter 2nd number:  ");
    scanf("%d",&a);

	cir(a);
	return 0;
}

void cir(int r)
{
	int ans;
	ans=3.14*r*r;
	printf("Answer - %d  \n",ans);
}

