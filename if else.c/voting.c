#include<stdio.h>
int main() 
{
//	Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. Go to the editor
//Expected Output :
	
	
    
    int age;
    printf("enter the value:");
    scanf("%d",&age);
    if(age>=0)
    {
    	printf("you are eligible for vote");
	}
	else
	{
		printf("it is not eligible for vote");
	}
	return 0;
	
}  
