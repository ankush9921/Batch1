#include<stdio.h>
int main()
{
   	float a,b,c,ans;
   	printf("enter two num: ");
   	scanf("%f%f%f",&a,&b,&c);
   	ans=(a+b+c)*(a+b+c)-2*(a*b+b*c+c*a);
   	printf("%f",ans);
	
	return 0;
}
