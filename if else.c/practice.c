#include<stdio.h>
int main()
{
	int i,arr[3]={ 5,6,6,7,8,7,10};
	for (i=0;i<3;i++)
	{
		if(arr[i]==arr[i+1])
      {
      	printf("%d",arr[i]);
			  }		
	}
	return 0;
}
