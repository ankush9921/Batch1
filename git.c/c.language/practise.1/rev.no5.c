#include<stdio.h>

int main()
{
	int num=12345, am1, am2, am3, am4, rev, rev1;
	
	am1=num%10; //5
	num=num/10;  //1234
	am2=num%10;  //4
	num=num/10;  //123
	am3=num%10;  //3
	num=num/10;  //12
	am4=num%10;  //2
	num=num/10;  //1	
	rev=(am1*10000+am2*1000)+(am3*100+am4*10+num);
	printf("%d\n",rev);
	rev1=(am1+num);
	printf("%d",rev1);
	
	
	return 0;
	 
}
