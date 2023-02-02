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
   int class_held;
   int class_attended;
	int per;
	
	printf("Enter the number of class held: ");
	scanf("%d",&class_held);
	printf("Enter the number of class attend: ");
	scanf("%d",&class_attended);
	
	per=(class_attended*100)/class_held;
	if(per>=75)
	{
		printf("allow the exam");
		
		
	}else
	{
		printf("not allow the exam");
	}
	
	
	
	
	return 0;
}
