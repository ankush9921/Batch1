#include<stdio.h>

int main()
{
	int num=10;
	
	printf("%d\n",--num);   //9
	printf("%d\n",num--);   //9
	printf("%d\n",num);     //8
	printf("%d\n",num++);   //8
	printf("%d\n",num++);   //9
	printf("%d\n",++num);  //11
	printf("%d\n",num);    //11
	
	return 0; 
	    
}
