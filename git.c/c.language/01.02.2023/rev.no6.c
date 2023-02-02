#include<stdio.h>

int main()
{
	int num=1234567, som1, som2, som3, som4, som5, som6, rev, rev1;
	som1=num%10;   //7
	num=num/10;    //123456
	som2=num%10;   //6
	num=num/10;    //12345
	som3=num%10;   //5
	num=num/10;    //1234
	som4=num%10;   //4
	num=num/10;    //123
	som5=num%10;   //3
	num=num/10;    //12
	som6=num%10;    //2
	num=num/10;     //1
	rev=(som1*1000000+som2*100000+som3*10000)+(som4*1000+som5*100+som6*10+num);
	printf("%d\n",rev);
	rev1=(som6+som2);
	printf("%d",rev1);
	return 0;
}
