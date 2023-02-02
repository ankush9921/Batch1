#include<stdio.h>
#include<conio.h>
main()
{
int arr[5],i;
for(i=0;i<=5;i++)
{
printf("Enter a value of array arr[%d]:",i);
scanf("%d",&arr[i]);
}
printf("The array element are:");
for(i=0;i<=5;i++)
{
 printf("%d 	", arr[i]);
 printf("");
}
getch();
}
