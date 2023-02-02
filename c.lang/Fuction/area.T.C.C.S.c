#include<stdio.h>
int add(int x,int y);
 int cir(int x);
 int cub(int x,int y,int z);
int main()
{  
    int a,b,c,add1,cir1,cub1;
    
    printf("the area of tringle \n");
    printf("enter the value of higth a= :");
    scanf("%d",&a);
    printf("enter the value if length b= :");
    scanf("%d",&b);
    add1=add(a,b);
    
    printf("the are of tringle is %d ",add1);
    ///////////////////////////////////////
     printf("\nthe area of circle ");
    printf("\nenter the value of radius a= ");
    scanf("%d",&a);
    cir1=cir(a);
    printf("the area of circle %d ",cir1);
    /////////////////////////////////////
    
	printf("\nthe area of cube ");
	printf("enter the three side of cube :");
	scanf("%d%d%d",&a,&b,&c);
	cub1=cub(a,b,c);
	printf("the area of cube %d   ",cub1);
	
	return 0;
}
 int add(int x,int y)
 {
 	int ans;
 	ans=(x*y)/2;
 	return ans;
 }
 int cir(int x)
 {
 	int ans;
 	ans=2*3.14*x;
 	return ans;
 }
 int cub(int x,int y,int z)
 {
 	int ans;
 	ans=x*y*z;
 	return ans;
 }
