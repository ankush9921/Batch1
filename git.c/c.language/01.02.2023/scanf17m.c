#include<stdio.h>

int main()
{
	float f1;
	float f2;
	float f3;
	float f4;
	
	float ans;                                          //declaration
	
	printf("enter four no for addition:");             //o/p
	
	scanf("%f\n%f\n%f\n%f",&f1,&f2,&f3,&f4);             //input
	
	ans=f1-f2-f3-f4;                                     //logic

    printf("%f",ans);                                    //o/p
	
	return 0;	
	
}
