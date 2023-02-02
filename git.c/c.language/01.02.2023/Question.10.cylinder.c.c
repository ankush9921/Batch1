#include<stdio.h>

int main()
{

	int height=38;
	int radius=35;
	int pie=3.14285714286;


	int volume;
	
	printf("enter volume of the cone:");

	volume=pie*(radius*radius)*height/3;

	printf("%d",volume);

    return 0;

}
