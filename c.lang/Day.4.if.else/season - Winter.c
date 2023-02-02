
#include<stdio.h>
int main()
{
    int day,month,year,monthday;  
    printf("enter day : ");
    scanf("%d",&day); //12
    printf("enter month : ");
    scanf("%d",&month);//5
    printf("Enter year : ");  
    scanf("%d",&year);//2023    //13-5-2023
    if(month>=1 && month<=12)
    {
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        {
            monthday=31;
        }
        else if(month==4 || month==6 || month==9 || month==11)
        {
            monthday=30;
        }
        else
        {
            monthday=28;
        }
        if(day>=1 && day<=monthday)
        {
            if(day==monthday && month==12) //  if=31-12-2013---->1-1-2024
            {
                day=1;
                month=1;
                year++;
            }
            else if(day==monthday) //if=day=31--->day=1
            {
                day=1;
                month++;
            }
            else
            {
                day++;
            }
            printf("%d-%d-%d",day,month,year);
        }
        else
        {
            printf("Invalide Day");
        }
    }
    else
    {
        printf("Invalid month");
    }
      if(month==12 ||month==1 ||month==2)
      {
      	printf("season - Winter");
	  }
      
      
    return 0;
}


