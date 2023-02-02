//Test Data :
//Input the 10 numbers :
//Number-1 :2
//Number-10 :2
//Expected Output :
//The sum of 10 no is : 55
//The Average is : 5.500000
#include <stdio.h>
int main()
{       
    int i,n,sum=0;
	float avg;
	printf("Input the 10 numbers : \n");
	for (i=1;i<=10;i++)
	{
        printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=i;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",avg, sum);
	return 0;
 
}
