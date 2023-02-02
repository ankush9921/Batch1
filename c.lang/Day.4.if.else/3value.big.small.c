 //Take input of age of 3 people by user and determine oldest and youngest among them.
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter the first age : ");
  scanf("%d",&a);	
  printf("enter the second age : ");
  scanf("%d",&b);
  printf("enter the third age : ");
  scanf("%d",&c);
  
  if((a>b) && (a>c))
  { 
    printf("the bigger age is a\n ");
  }
  else
  {
	printf("the smaller age is a\n");
  }
  if((b>a) && (b>c))
  {
  	printf("the bigger age is b\n");	
  }
  else
  {
  	printf("the samller age is b\n");
  	
  }
  if((c>a)&& (c>a))
   {
  	printf("the bigger age is c\n");
  	
   }
  else
	{
		printf("the samller age is c\n");
	}
	
	
	return 0;
}
