#include<stdio.h>
int main()
{
    int num=123456,rem1,rem2,rem3,rem4,rem5,rev,rev2;
  	
    
    rem1=num%10;//rem=6
    num=num/10;//12345
    rem2=num%10;//rem=5
    num=num/10;//1234
    rem3=num%10;//rem=4
    num=num/10;//123
	rem4=num%10;//rem=3
	num=num/10;//12
	rem5=num%10;//rem=2
	num=num/10;
	rev=(num+rem4+rem2);
	rev2=(rem5+rem3+rem1);
	printf("%d \n",rev);
		printf("%d",rev2);
	
	return 0;
}
