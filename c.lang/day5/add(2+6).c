#include<stdio.h>
int main()
{
    int num=1234567,rem1,rem2,rem3,rem4,rem5,rem6,ans;
  	rem1=num%10;//r=7
    num=num/10;//123456
    rem2=num%10;//rem=6
    num=num/10;//12345
    rem3=num%10;//rem=5
    num=num/10;//1234
    rem4=num%10;//rem=4
    num=num/10;//123
	rem5=num%10;//rem=3
	num=num/10;//12
	rem6=num%10;//rem=2rem2
	num=num/10;
	ans=rem2+rem6;
	printf("%d",ans);
	
	return 0;
}
