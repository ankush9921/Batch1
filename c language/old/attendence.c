#include<stdio.h>
int main()
{
int classes_held;
int classes_attended;
int per;

printf("Number of classes held:  ");
scanf("%d",&classes_held);
printf("Number of classes attended:  ");
scanf("%d",&classes_attended);	

per=(classes_attended*100)/classes_held;

if (per>=75)
{
	printf("student are allowed");
}
else
{
	printf("students are not allowed");
}
	
	return 0;
}
