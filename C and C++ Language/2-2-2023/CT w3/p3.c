//3. Write a C program to check whether a given number is positive or negative. Go to the editor
//Test Data : 15
//Expected Output :
//15 is a positive number

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number=");
	scanf("%d",&num);
	
	if(0<num)
	{
		printf("%d is a positive number",num);
	}
	else if(0>num)
	{
		printf("%d is a negative number",num);
	}
	else
	{
		printf("%d is a not negative not positive number",num);
	}
	
	return 0;
}
