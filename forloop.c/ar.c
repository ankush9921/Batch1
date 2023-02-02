#include <stdio.h>
void main()
{       
    int i,n,sum=0;
	float avg;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
 
}

Sample Output:

Input the 10 numbers :                                                                                        
Number-1 :1                                                                                                   
Number-2 :2                                                                                                   
Number-3 :3                                                                                                   
Number-4 :4                                                                                                   
Number-5 :5                                                                                                   
Number-6 :6                                                                                                   
Number-7 :7                                                                                                   
Number-8 :8                                                                                                   
Number-9 :9                                                                                                   
Number-10 :10                                                                                                 
The sum of 10 no is : 55                                                                                      
The Average is : 5.500000  
Flowchart:

Flowchart: Read 10 numbers and find their sum and average
C Programming Code Editor:



Improve this sample solution and post your code through Disqus.

Previous: Write a program in C to display n terms of natural number and their sum.
Next: Write a program in C to display the cube of the number upto a given integer.

What is the difficulty level of this exercise?

EASY MEDIUM HARD
Based on 1688 votes, average difficulty level of this exercise is Easy .
Test your Programming skills with w3resource's quiz.

?
Follow us on Facebook and Twitter for latest update.

C Programming: Tips of the Day
How can mixed data types (int, float, char, etc) be stored in an array?

You can make the array elements a discriminated union, aka tagged union.

struct {
enum { is_int, is_float, is_char } type;
union {
int ival;
float fval;
char cval;
    } val;
} my_array[10];
The type member is used to hold the choice of which member of the union is should be used for each array element. So if you want to store an int in the first element, you would do:

my_array[0].type = is_int;
my_array[0].val.ival = 3;
When you want to access an element of the array, you must first check the type, then use the corresponding member of the union. A switch statement is useful:

switch (my_array[n].type) {
case is_int:
// Do stuff for integer, using my_array[n].ival
break;
case is_float:
// Do stuff for float, using my_array[n].fval
break;
case is_char:
// Do stuff for char, using my_array[n].cvar
break;
default:
// Report an error, this shouldn't happen
}
It's left up to the programmer to ensure that the type member always corresponds to the last value stored in the union.

Ref : https://bit.ly/3phiA9W

Weekly Trends
Java Basic Programming Exercises
SQL Subqueries
Adventureworks Database Exercises
C# Sharp Basic Exercises
SQL COUNT() with distinct
JavaScript String Exercises
JavaScript HTML Form Validation
Java Collection Exercises
SQL COUNT() function
SQL Inner Join
JavaScript functions Exercises
Python Tutorial
Python Array Exercises
SQL Cross Join
C# Sharp Array Exercises



