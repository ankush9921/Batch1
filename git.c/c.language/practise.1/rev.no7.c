#include<stdio.h>

int main()
{
	int num=123456, y1, y2, y3, y4, y5, rev, rev1, rev2;
	y1=num%10;   //6
	num=num/10;  //12345
	y2=num%10;   //5
	num=num/10;   //1234
	y3=num%10;    //4 
	num=num/10;   //123 
	y4=num%10;    //3 
	num=num/10;   //12
	y5=num%10;    //2
	num=num/10;   //1
	
    rev=(y1*100000+y2*10000)+(y3*1000+y4*100+y5*10+num);
	printf("%d\n",rev);

	rev1=(num+y4+y2);
	rev2=(y5+y3+y1);

	printf("%d\n",rev1);
	printf("%d",rev2);

	return 0;
}
