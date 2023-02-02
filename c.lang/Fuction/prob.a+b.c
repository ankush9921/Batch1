#include<stdio.h>
 int add();
 
 int main()
 { 
    int a,b,ans1;
    	
    printf("enter the value addtion : ");
    scanf("%d%d",&a,&b);
    
	ans1=add(a,b);
 	
 	return 0;
 }
int	 add(int x,int y)
 { 
 	int ans1;
 	ans1=x+y;
	printf("%d",ans1);	
// 	return ans;
 }
