   #include<stdio.h>
   int main()
   {
   	int age;
   	printf("enter the age: ");
   	scanf("%d",&age);
   	if(age>=18)
   	{
   		printf("eligible for the vote%d",age);
	 }
	  else
	  {
	  printf("not for eligible for vote%d",age);	
	  }
   	
   	
   	
   	return 0;
   }