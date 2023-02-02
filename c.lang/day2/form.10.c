#include<stdio.h>
int main()
{
	int a=585;
	int b=745;
	int c=8656;
	int ans;
	
	ans=(a*a+b*b+c*c)+2*(a*b+b*c+c*a);
	printf("%d",ans);
	
	return 0;
}
