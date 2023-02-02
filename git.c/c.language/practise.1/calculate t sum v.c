#include<stdio.h>                         //The following program calculate the sum of 1+2+3+...+50. 
int main()                          //The sum is stated in sum = sum + x, where i takes values 1 to 50.
{
    int sum; 
	int x; 
	sum=0;
    for(x=1;x<=50;++x) // x take values in {1,2,3,...,50}
    {
    sum = sum + x; 
    }
    printf(" 1+2+...+50=%d\n",sum);
return 0;
}
