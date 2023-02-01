#include<stdio.h>//7-Python Program to Calculate the Volume of cuboid - l*b*h
int main()
{
   int l,b,h;
  
   int cuboid;
  
    printf("Enter the length, Breath, Hight :\n");
    
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Enter the Breath: ");
    scanf("%d",&b);
    printf("Enter the Hight : ");
    scanf("%d",&h);
    
    cuboid=l*b*h;
    printf("%d",cuboid);
    
    return 0;
}
