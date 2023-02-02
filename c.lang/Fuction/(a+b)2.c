#include<stdio.h>

 int aad();

int main()
{
 	int a,b,c=50,ans,ans1;
	printf("Enter the (a+b)^2 : \n");
	scanf("%d\n%d",&a,&b);
	
	ans=add(a,b);
	ans1=add(ans,c);
	
	printf("%d",ans);
	return 0;
}
   int add(int z,int n)
{
	int ans;
	ans=z*z+2*z*n+n*n;
	return ans;
}
