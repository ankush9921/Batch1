//
//9 Write a program to calculate the electricity bill (accept number of unit from user) according to the following criteria : 
//Unit Price First 100 units no charge 
//Next 100 units Rs 5 per unit 
//After 200 units Rs 10 per unit 
//(For example if input unit is 350 than total bill amount is Rs2000) 

#include<stdio.h>
int main()
{
	int unit,charge,u1,u2,u3,u4,ch1,ch2,ch3,ch4,tax,bill;
	
	printf("Enter the unit=");
	scanf("%d",&unit);
	
	if(unit<=100)            //no charge
	{
		printf("No charge on %d\n",unit);
		charge=unit*0;
		
	}
	else if(100<unit &&  unit<=200)			// 5 per unit 
	{
		u1=unit-100;	//150-100=50
		printf("5 rs per unit on %d\n",u1);
		ch1=u1*5;		//50*5=500
		unit=unit-u1;	//150-50=100
		printf("No charge on %d\n",unit);
		ch2=unit*0;
		
		charge=ch1+ch2;
	}
	else if(200<unit && unit<=400)			// 10 per unit 
	{
		u1=unit-200;	//150=350-200
		printf("10 rs per unit on %d\n",u1);
		ch1=u1*10;	//1500
		unit=unit-u1;	//350-150=200
		u2=unit-100;	//200-100=100
		printf("5 rs per unit on %d\n",u2);
		ch2=u2*5;		//100*5=500
		unit=unit-u2;	//200-100=100
		printf("No charge on %d\n",unit);
		ch3=unit*0;
		
		charge=ch1+ch2+ch3;
	}
	else if (unit>400)				// 15 per unit 
	{
		u1=unit-400;
		printf("15 rs per unit on %d\n",u1);
		ch1=u1*15;
		unit=unit-u1;
		u2=unit-200;
		printf("10 rs per unit on %d\n",u2);
		ch2=u2*10;
		unit=unit-u2;
		u3=unit-100;
		printf("5 rs per unit on %d\n",u3);
		ch3=u3*5;
		unit=unit-u3;
		printf("No charge on %d\n",unit);
		ch4=unit*0;
		
		charge=ch1+ch2+ch3+ch4;
	}
	
	printf("Bill amount=%d\n",charge); 
	
	if(charge<=1000)
	{
		printf("give 9 percent tax\n");
		tax=(charge*9)/100;
	}
	else
	{
		printf("give 18 percent tax\n");
		tax=(charge*18)/100;
	}
	
	bill=tax+charge;
	
	printf("total bill amount=%d\n",bill);
	
	return 0;
	
}
