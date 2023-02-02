//perfect number
#include<iostream>
using namespace std;
int main()
{
	int num,num1,sum=0,i;
	cout<<"Enter the 1st number :";
	cin>>num;
	cout<<"Enter the last number :";
	cin>>num1;
	while(num<=num1)
	{
		for(i=1;i<=num/2;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==num)
		cout<<num<<endl;
		num++;
	}
	
	return 0;
}
