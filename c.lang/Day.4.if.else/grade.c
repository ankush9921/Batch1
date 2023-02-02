#include<stdio.h>
int main()
{  
   int mark;
   
   printf("Enter the mark: ");
   scanf("%d",&mark);
   
   if(mark>=0 && mark<25)
   {
   	printf("Grad F");
   }
   else if(mark>=25 && mark<45)
   {
   	printf("Grad E");
   }
   else if(mark>=45 && mark<50)
   {
   	printf("Grad D");
   }
   else if(mark>=50 && mark<60)
   {
   	printf("Grad C");
   }
   else if(mark>=60 && mark<80)
   {
   	printf("Grad B");
   }
   else
   {
   	printf("Grad A");
   }
	return 0;
}
