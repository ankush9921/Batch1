#include<stdio.h>
int add(int x,int y);

int main()
{
   int a,b,add1;
   printf("enter the num : ");
   scanf("%d%d",&a,&b);
   	add1=add(a,b);
   	printf("%d",add1);
	
	
	return 0;
}
int add(int x,int y)
{
	int tem;
	tem=x;
	x=y;
	y=tem;
	return (x,y);
}
