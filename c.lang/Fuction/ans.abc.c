#include<stdio.h>
 int add(int x,int y);
 int main()
 {
    int a,b,c,ans1;
	printf("enter the vale of a: \n");
	scanf("%d",&a);
	printf(" enter thr value of b: \n");
	scanf("%d",&b);
	
	ans1=add(a,b);
	printf(" the (a-b)^2= %d ",ans1);
	
	
 	return 0;
 }
   int add(int x,int y)
   {
   		int ans;
   		ans=x*x-2*x*y+y*y;
   		return ans;
   }
