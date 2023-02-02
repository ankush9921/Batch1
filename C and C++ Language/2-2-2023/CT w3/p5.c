//5. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. Go to the editor
//Test Data : 21
//Expected Output :
//Congratulation! You are eligible for casting your vote.



#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the your age=");
	scanf("%d",&num);
	
	if(num>=18)
	{
		printf("Congratulation!\nYou are eligible for casting your vote.");
	}
	else
	{
		printf("Sorry!\nYou are not eligible for casting your vote.");
	}
	
	return 0;
}
