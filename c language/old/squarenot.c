#include<stdio.h>
int main()
{
    int length,breadth,user;
     printf("Enter length : ");
     scanf("%d",&length);
     printf ("Enter breadth : ");
     scanf("%d",&breadth);
       user=length*breadth;
    if (length==breadth)
    {
        printf("it is square");
    }
    else
	{
        printf("it is not square");
    }
	return 0;
}
