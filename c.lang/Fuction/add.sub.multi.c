#include<stdio.h>
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int main ()
{  
    int a,b,add1,sub1,mul1,div1;
    
    printf("Enter the value for aadtion:\n ");
    printf("enter the first value a= : ");
    scanf("%d",&a);
    printf("enter the first value b= : ");
	scanf("%d",&b);
	
	add1=add(a,b);
	printf("the addition of (A+B)= %d\n ",add1);
	///////////////////////////////////////////////
	
	printf("Enter the value for substraction:\n ");
    printf("enter the first value a= :\n ");
    scanf("%d",&a);
    printf("enter the first value b= :\n ");
	scanf("%d",&b);
	sub1=sub(a,b);
	printf("%d\n",sub1);
	//////////////////////////////////////////////////
	printf("Enter the value for multiplication: \n");
    printf("enter the first value a= : ");
    scanf("%d",&a);
    printf("enter the first value b= : ");
	scanf("%d",&b);
	mul1=mul(a,b);
	printf("%d\n",mul1);
	//////////////////////////////////////////////////
	printf("Enter the value for division: \n");
    printf("enter the first value a= : ");
    scanf("%d",&a);
    printf("enter the first value b= : ");
	scanf("%d",&b);
	div1=div(a,b);
	printf("%d\n",div1);
	
	return 0;
	
}
	int add(int x,int y)
	{
	 int ans;
	 ans=x+y;
	 return ans;
	
	}
	int sub(int x,int y)
	{
	int ans;
	ans=x-y;
	return ans;	
	}
	int mul(int x,int y)
	{
		int ans;
		ans=x*y;
		return ans;
	}
	int div(int x,int y)
	{
		int ans;
		ans=x/y;
		return ans;
	}
