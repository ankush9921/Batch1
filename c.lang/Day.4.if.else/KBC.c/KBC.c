#include<stdio.h>
int main()
{
    int a,b,ans;
	printf("welcome to the game of KBC: /n");
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
	}else if(b==ans)
	{
		printf("you loss the game");
	}else
	{
		printf("wrong the ans you are loss the game");
	}
	
	
	
	
	
	return 0;
}
