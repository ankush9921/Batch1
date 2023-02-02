//7. Lets Play KBC
 //   You have to ask 15 Qustion based on Codeing consisting of 5 option out of 5 , 1 option is common i.e. Quit
  //  In this game there are certain stages if the candidate cross that particular stage then the minimum amount will be fixed for him/her there are two stages 1st stage is at qus no 5 and 2nd stage is qus  no 10
  //  if candidate cross question no 5 the minimum amout will be fixed i.e. 10,000     if candidate does'nt want to continue the game then need to press on quite the output should be maximum winning amount
   // 15        ?1 Crore
    //14        ?50,00,000    
    //13        ?25,00,000    
//    12        ?12,50,000    
//    11        ?6,40,000
//    10        ?3,20,000    
//    9        ?1,60,000
//    8        ?80,000
//    7        ?40,000
//    6        ?20,000    
//    5        ?10,000
//    4        ?5,000
//    3        ?3,000
//    2        ?2,000
//    1        ?1,000
#include<stdio.h>
int main()
{
	char a,b;
	
	printf("Wecome to kbc: ");
	printf("Start the Game :");
	printf("Q1. Who is the father of C language?");
	printf("A) Steve Jobs :\n");
	printf("B) James Gosling :\n");
	printf("C) Dennis Ritchie :\n");
	printf("D) Rasmus Lerdorf : \n");
	printf("E) Quite");
	scanf("%c",&a);
	
	if(a=='C')
	{
		printf("your answer is right");
		printf("you have give 1000 rs");
		
		printf("Q2.Which of the following is not a valid C variable name?\n ");
		printf("A) int number;\n");
		printf("B) float rate;\n");
		printf("C) int variable_count;\n");
		printf("D) int $main; \n");
		printf("E) Quite");
		scanf("%c",&a);
		
		if(a=='D')
		{
			printf("your answer is right");
			printf("you have give 2000 rs");
			
			
			printf("Q3. All keywords in C are in")
			
			
		}
		else if(a=='E')
		{
			printf("you have quite the question:\n");
			printf("so you have win only 1000 rs");
		}
		else
		{
			printf("your answer is wrong so you do not give any rs");	
		}
	
	   
	
	
	
	
	
	}
	else if(a=='E')
	{
		printf("rs=0");
	}
	else
	{
		printf("your answer is wrong so you do not give any rs");
	}
	
	
	
	
	
}
