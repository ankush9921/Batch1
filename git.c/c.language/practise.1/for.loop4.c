#include<stdio.h>
int main()
{
	int w, con;
	printf("Enter the Condition\n");
	scanf("%d",&con);
	for(w=1;w<10;w++)
	{
		printf("%d\n",w+con);
	}
	return 0;
}
