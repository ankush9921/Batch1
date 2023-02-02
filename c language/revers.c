#include<stdio.h>
int main()
{
	int num,rem1,rem2,rem3,rem4,rem5,rev;//declaration
    printf("enter the five digit number:");// message to send
    scanf("%d",&num); // 234567
    rem1=num%10;
    num=num/10;
    rem2=num%10;
    num=num/10;
    rem3=num%10;
    num=num/10;
    rem4=num%10;
    num=num/10;
    rem5=num%10;
    num=num/10;
    rev=rem1*100000+rem2*10000+rem3*1000+rem4*100+rem5*10+num;
    printf("%d",rev); 
    return 0;
    
    
    
    
}
