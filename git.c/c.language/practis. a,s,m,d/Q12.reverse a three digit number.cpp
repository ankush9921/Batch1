#include<stdio.h>//12 Python program to reverse a three digit number ans seven digit of number?
int main()
{
//	int num=123, n1, m2, rev;
//	printf("enter the reverse a three digit number:\n");
//	n1=num%10;   //3
//	num=num/10;  //12
//	m2=num%10;   //2
//	num=num/10;  //1+
//	rev=n1*100+m2*10+rev+num;
//	printf("%d",rev);

    int num=8520963, n1, n2, n3, n4, n5, n6, rev;
    printf("enter the reverse seven digit number:\n");
    n1=num%10;   //3
    num=num/10;  //852096
    n2=num%10;   //6
    num=num/10;   //85209
    n3=num%10;   //9
    num=num/10;  //8520
    n4=num%10;   //0
    num=num/10;   //852
    n5=num%10;   //2
    num=num/10;  //85
    n6=num%10;   //5
    num=num/10;  //8
    rev=n1*1000000+n2*100000+n3*10000+n4*1000+n5*100+n6*10+rev+num;
    printf("%d",rev);
	return 0;
}
