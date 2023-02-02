#include<stdio.h>  //A=65-a=97 
int main()
{
char ch;
int num;
printf("enter no.:  ");
scanf("%c",&ch); //A-65

num=ch;
num=num+32;//a=97
ch=num;	
printf("%c",ch);
return 0;
}
