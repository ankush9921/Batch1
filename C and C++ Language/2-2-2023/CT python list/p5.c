//5 A school has following rules for grading system:
//a. Below 25 - F
//b. 25 to 45 - E
//c. 45 to 50 - D
//d. 50 to 60 - C
//e. 60 to 80 - B
//f. Above 80 - A
//Ask user to enter marks and print the corresponding grade.



#include<stdio.h>
int main()
{
	int marathi,hindi,english,science,maths,social_sci,total,per;
	
	printf("Enter the marks out of 100\n\n");
	
	printf("Enter marathi marks=");
	scanf("%d",&marathi);
	printf("Enter hindi marks=");
	scanf("%d",&hindi);
	printf("Enter english marks=");
	scanf("%d",&english);
	printf("Enter science marks=");
	scanf("%d",&science);
	printf("Enter maths marks=");
	scanf("%d",&maths);
	printf("Enter social_sci marks=");
	scanf("%d",&social_sci);
	
	total=marathi+hindi+english+science+maths+social_sci;
	
	per=(total*100)/600;
	
	printf("Percentage=%d\n",per);
	
	if(per<25)
	{
		printf("grade=F");
	}
	else if(25<=per && per<45)
	{
		printf("grade=E");
	}
	else if(45<=per && per<50)
	{
		printf("grade=D");
	}
	else if(50<=per && per<60)
	{
		printf("grade=C");
	}
	else if(60<=per && per<80)
	{
		printf("grade=B");
	}
	else if(per>=80)
	{
		printf("grade=A");
	}
	
	return 0;
}
