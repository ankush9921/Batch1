
#include<stdio.h>
int main()
{  
   char ch;
   printf("Enter the charecters: ");
   scanf("%c",&ch);
   if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o'||ch=='u')
   {
   	printf("yes this is the vowel  ");
   }
	else
	{
		printf("consonant");
	}
	
	
	return 0;
}
