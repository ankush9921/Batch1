#include<stdio.h>//7-Python Program to Calculate the Volume of cuboid - l*b*h
int main()
{
   int l;
   int b;
   int h;
   int cuboid;
   printf("Enter the length, Breath, Hight :\n ");
   scanf("%d\n%d\n%d",&l,&b,&h);
   cuboid=l*b*h;
   printf("%d",cuboid);

//    int length, breath, hight;
//    int cuboid;
//    printf("Enter the length, Breath, Hight :\n");
//    scanf("%d\n%d\n%d",&length, &breath, &hight);
//    cuboid=length*breath*hight;
//    printf("%d",cuboid);

//      int l;
//      int b;
//      int h;
//      int cuboid;
//      printf("Enter the length, breath, higth:\n");
//      scanf("%d\n%d\n%d",&l, &b, &h);
//      cuboid=l+b+h;
//      printf("%d",cuboid);
//
//       float l;
//       float b;
//       float h;
//       float  cuboid;
//       printf("Enter the length, breath, hight:");
//       scanf("%f\n%f\n%f",&l, &b, &h);
//       cuboid=l*b*h;
//       printf("%f",cuboid);

        
   return 0;	
}
