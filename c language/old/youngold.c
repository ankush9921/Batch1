//Take input of age of 3 people by user and determine oldest and youngest among them.

#include<stdio.h>
int main()
{
     int a,b,c;
   printf("Type the ages of a:");
   scanf("%d",&a);
    printf("Type the ages of b:");
   scanf("%d",&b);
    printf("Type the ages of c:");
   scanf("%d",&c);
   if ((a>b) && (a>c)) //60>50 60>30 big
   {
       printf("\n biggest age is A");
   }
   else
   {
       printf("\n lesser age is A");
   }
   
   if ((b>a) && (b>c))//50>60 50>30 less
   {
       printf("\n biggest age is B");
   }
   else
   {
       printf("\n lesser age is B");
   }
   if ((c>a) && (c>a))//30>60 30>60
   {
       printf("\n biggest age is C");
   }
   else
   {
       printf("\n lesser age is C");
   }
	return 0;
}
