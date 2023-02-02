#include<stdio.h>

int main()
{
   char ch;
   printf("Enter the Charecter : ");
   scanf("%c",&ch);
   
   if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o'|| ch=='u')
   {
   	printf("yes");
   }
   else
   {
   printf("Consonent");
   }
   return 0;
}
