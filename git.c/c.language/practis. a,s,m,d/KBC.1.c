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
	char a,b,c,d,e,f,g,h,i,j,k,l,m,n, o;
	
	printf("Wecome to kbc: ");
	printf("Start the Game :");

	printf("Q1. Who is the father of C language?");
	printf("A) Steve Jobs :\n");
	printf("B) James Gosling :\n");
	printf("C) Dennis Ritchie :\n");
	printf("D) Rasmus Lerdorf :\n");
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
		scanf("%c",&b);
		
		if(b=='D')
		{
			printf("your answer is right");
			printf("you have give 2000 rs");
			
			
			
			printf("Q3. All keywords in C are in")//Q3
			printf("A) lowercase letters: \n");
			printf("B) upper case letter: \n");
			printf("C) camelcase letter: \n");
			printf("D) none of the mentioned\n");
			printf("E) Quite");
			scanf("%c",&c);
			
			if(c=='A')
			{
				
				
				printf("you have quite the question:\n");
				printf("so you have win only 3000 rs");	
			
			
	  			printf("Q4: Which of the following is true for variable names in C?");  //Q4
	  			printf("A) They can contain alphanumeric characters as well as special characters: \n");
				printf("B) it is not an error to declare a variable to be one of the keywords(like goto, static): \n");
				printf("C) variable name cannot start with a digit: \n");
				printf("D) variable can be of any length: \n");
				printf("E) Quite");
				scanf("%c",&c);
			
				if(d==c)
				{
					printf("you have quite the question:\n");
					printf("so you have win only 4000 rs");
			
			
					printf("Q5: Which is valid c expression?");  //Q5
	  				printf("A)int my_num=100,000: \n");
					printf("B)int my_num=100000 : \n");
					printf("C)int my num=1000 : \n");
					printf("D)int $my_num=10000 : \n");
					printf("E) Quite");
					scanf("%c",&e);
			
			        if(e==b)
		        	{
				    	printf("you have quite the question:\n");
		        		printf("so you have win only 5000 rs");
		        		
		        		
		        		printf("Q6: Which of the following cannot be a variable name in C? ");  //Q6
	  					printf("A) volatile : \n");
						printf("B) true : \n");
						printf("C) friend : \n");
						printf("D) export : \n");
						printf("E) Quite");
						scanf("%c",&f);
						
						if(f==A)
						{
							printf("you have quite the question:\n");
		        			printf("so you have win only 10000 rs");
		        			
		        			printf("Q7:What of the following declaration is not supported by C language? ");  //Q6
	  						printf("A) String str: \n");
							printf("B) Char*str: \n");
							printf("C) Float str=3e2 : \n");
							printf("D) Both "String str" and "Float str=3e2" : \n");
							printf("E) Quite");
							scanf("%c",&f);
							
							if(g==A)
							{
						    	printf("you have quite the question:\n");
		        				printf("so you have win only 20000 rs");
		        				
		        				printf("Q8: Whhat is short int in c programming ? ");  
	  							printf("A) The basic data type of c: \n");
								printf("B) Qualifier: \n");
								printf("C) Short is the qualifier and int is the basic data type: \n");
								printf("D) All of the mentioned: \n");
								printf("E) Quite");
								scanf("%c",&g);
		        				
		        				if(h==c)
		        				{
		        					printf("you have quite the question:\n");
		        					printf("so you have win only 40000 rs");
		        					
		        					
		        					printf("Q9:Which keyword is used to prevent any changes in the variable within a C program? ");  
	  								printf("A) immutable: \n");
									printf("B) mutable: \n");
									printf("C) sonst: \n");
									printf("D) volatile: \n");
									printf("E) Quite");
									scanf("%c",&h);
									
									if(i==c)
									{
										printf("you have quite the question:\n");
		        						printf("so you have win only 80000 rs");
										
										printf("Q10:");  
	  									printf("A) : \n");
										printf("B) : \n");
										printf("C) : \n");
										printf("D) : \n");
										printf("E) Quite");
										scanf("%c",&h);
											
									}
								}
		     	
							}
		        			
							
								
						}
		         	}
			
			
			}
			}
			
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
