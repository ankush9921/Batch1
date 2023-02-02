//Write a program in C to count a total number of duplicate elements in an array.
#include <stdio.h>

int main()
 {
    int n, i,j,count=0;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter  array: ");
    for (i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
	{
      for(j=i+1;j<n;j++)
      {
      	if(arr[i]==arr[j])
      	{
      		count++;
      		break;
		}
	  }
    }

    printf("total array: %d ",count);
    

    return 0;
}



