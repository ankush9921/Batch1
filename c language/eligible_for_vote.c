//5. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. Go to the editor
//Test Data : 21
//Expected Output :
//Congratulation! You are eligible for casting your vote.


#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter the age=");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you are eligible for voting.");
	}
	else
	{
		printf("you are not eligible for voting.");
	}
	
	
	return 0;
}
