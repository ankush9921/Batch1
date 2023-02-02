#include<stdio.h>
int main()
{    
   int arr[10];
   int i,ans1=0,ans2=0;  
   for(i=0;i<10;i++)    
    {
    printf("Enter the number: ");      
    scanf("%d",&arr[i]);    
    } 
	   for(i=0;i<10;i++)    
	{ 
	if(i%2==0)        
	{ 
	printf("\n%d even num",arr[i]);      
	ans1=ans1+arr[i];                   
	 }
	  else     
    {
	printf("%d odd num\n",arr[i]);       
    ans2=ans2+arr[i];                       
	 }   
	}
	  printf("%d\n",ans1);   
	  printf("%d\n",ans2);      
	 
	   return 0;  }


