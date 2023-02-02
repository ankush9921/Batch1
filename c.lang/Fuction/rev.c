#include<stdio.h>
int add(int x);
int main()
{
	int a,add1;
	scanf("%d",&a);
	add1=add(a);
	printf("%d",add1);
	return 0;
}
int add(int x)
{
  int num,rev,num1,num2;
  num=x/100;  //123
  num1=x%100/10;//12
  num2=x%10/100;///1
  rev=num2*100+num1*10;
  return rev;
}
