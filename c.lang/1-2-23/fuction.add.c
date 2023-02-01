#include<stdio.h>
int add(int x,int y);
int main()
{
    int a,b,add1;
	printf("this is the program for addtion \n");
	printf("...................................\n");
	
	printf("enter the value of a= ");
	scanf("%d",&a);
	printf("enter the value of b= ");
	scanf("%d",&b);
	add1=add(a,b);
	printf("the addtion is=%d",add1);
	
	return 0;
}
  int add(int x,int y)
  {
  	int ans;
  	ans=x+y;
  	return ans;
  }
