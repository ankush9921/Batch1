#include<stdio.h>
int add(int x,int y);
int main()
{  
   int a,b,c,ans1,ans2;
   printf("eter the value a: ");
   scanf("%d",&a);
   printf("eter the value b: ");
   scanf("%d",&b);
   printf("eter the value c: ");
   scanf("%d",&c);
    ans1=add(a,b);
    printf("%d\n",ans1);
    ans2=add(ans1,c);
    printf("\n%d",ans2);
}
 int add(int x,int y)
 {
 	int ans;
 	ans=x+y;
 	return ans;
 }
