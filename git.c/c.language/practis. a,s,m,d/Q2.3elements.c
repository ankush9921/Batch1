//Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
//est Data :
//Input the number of elements to store in the array :3
//Input 3 number of elements in the array :
//element - 0 : 2
//element - 1 : 5
//element - 2 : 7
//Expected Output :
//The values store into the array are :
//2 5 7
//The values store into the array in reverse are :
//7 5 2
#include<stdio.h>
int main()
{
	 int N,a[3], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < 3; i++)
	{  
        scanf("%d", &a[i]);  
    }
    printf("Array elements are:\n");  
    for(i = N-3; i >= 0; i--)  
    {
        printf("%d\n", a[N]);  
    }
    return 0;  
}  

