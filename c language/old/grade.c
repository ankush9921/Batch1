//A school has following rules for grading system:
// Below 25 - F
// 25 to 45 - E
// 45 to 50 - D
// 50 to 60 - C
// 60 to 80 - B
// Above 80 - A
//Ask user to enter marks and print the corresponding grade.

#include<stdio.h>
int main()
{
int marks ;

printf("enter the marks:  ");
scanf("%d",&marks);

if (marks<25)
{
	printf("F");
}

else if(marks>=25 && marks<45)
{
	printf("E");
}

else if(marks>=45 && marks<50)
{
	printf("D");
}
else if(marks>=50 && marks<60)
{
	printf("C");
}
else if(marks>=60 && marks<80)
{
	printf("B");
}
else 
{
	printf("A");
}
	
	return 0;
}
