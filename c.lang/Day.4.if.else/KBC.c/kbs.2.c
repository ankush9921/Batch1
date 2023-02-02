#include<stdio.h>
int main()
{
    int a,b,ans;
	printf("welcome to the game of KBC/n: ");
	printf("are you ready for the game: \n");
	printf("Q1. Who is the father of C language?\n");
    printf("1) Steve Jobs\n");
    printf("2) James Gosling\n");
    printf("3) Dennis Ritchie\n");
    printf("4) Rasmus Lerdorf\n");
    printf("5) quite the game\n");
    printf("Answer=: ");
    scanf("%d",&ans);
    a=3;
    b=5;
    if(a==ans)
    {
    	printf("you are ans is correct\n");
    	printf("you have win the 1000 rs\n\n");
    	
    	printf("2. Which of the following is not a valid C variable name?\n");
        printf("1) int number\n");
        printf("2) float rate\n");
        printf("3) int variable_count\n");
        printf("4) int $main\n");
        printf("5) quite the game\n");
        printf("Answer=: ");
        scanf("%d",&ans);
        a=4;
        b=5;
        if(a==ans)
        {
        	printf("you are ans is correct\n");
        	printf("you have win the 2000rs\n\n");
		} 
		//Q2
		else if(b==ans)
		{
			printf("you loss the game");
		}
		else
		{
			printf("wrong the ans you are loss the game");
		}
    	
    //1Q	
	}else if(b==ans)
	{
		printf("you loss the game");
	}else
	{
		printf("wrong the ans you are loss the game");
	}
	
	
	
	
	
	return 0;
}
