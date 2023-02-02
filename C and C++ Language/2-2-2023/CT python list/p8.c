//8 A student will not be allowed to sit in exam if his/her attendance is less than 75%.
//Take following input from user
//Number of classes held
//Number of classes attended.
//And print
//percentage of class attended
//Is student is allowed to sit in exam or not.


#include<stdio.h>
int main()
{
	int class_held,class_attend,per;
	
	printf("Enter the Number of classes held=");
	scanf("%d",&class_held);
	
	printf("Enter the Number of classes attended=");
	scanf("%d",&class_attend);
	
	per=(class_attend*100)/class_held;
	
	printf("percentage of class attended=%d\n\n",per);
	
	if(per>=75)
	{
		printf("student is allowed to sit in exam!!");
	}
	else
	{
		printf("student is not allowed to sit in exam");
	}
	
	return 0;
}
