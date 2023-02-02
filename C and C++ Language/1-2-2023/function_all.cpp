

#include<iostream>
using namespace std;

int add(int,int);
int sub(int,int);
int multi(int,int);
int dev(int,int);
float area_tri(float,float);
float area_rect(float,float);
float area_Square(float);
float area_Circle(float);
float volume_cuboid(float,float,float);
float volume_cube(float);
float volume_cone(float,float);
float volume_cylinder(float,float);
int swap(int *a,int *b);
int reverse(int);
int km(int);
float temp(int);
int ab_2(int *x,int *y,int *z1,int *z2);

int main()
{
	int a,b,ans,ans2;
	float c,d,e,ans1;
	
	cout<<"Enter the number for addition=";
	cin>>a>>b;
	ans=add(a,b);
	cout<<"Addition="<<ans;
	
	cout<<"\n\nEnter the number for subtraction=";
	cin>>a>>b;
	ans=sub(a,b);
	cout<<"subtraction="<<ans;
	
	cout<<"\n\nnEnter the number for multiplication=";
	cin>>a>>b;
	ans=multi(a,b);
	cout<<"multiplication="<<ans;
	
	div:
	cout<<"\n\nEnter the number for Division=";
	cin>>a>>b;
	if(a<b)
	{
		goto div;
	}
	ans=dev(a,b);
	cout<<"Division="<<ans;
	
	cout<<"\n\nCalculate the Area of a Triangle\n";
	cout<<"enter the value of breadth and height=";
	cin>>c>>d;
	ans1=area_tri(c,d);
	cout<<"Area of Triangle="<<ans1;
	
	cout<<"\n\nCalculate the Area of Rectangle\n";
	cout<<"enter the value of breadth and length=";
	cin>>c>>d;
	ans1=area_rect(c,d);
	cout<<"Area of Rectangle="<<ans1;
	
	cout<<"\n\nCalculate the Area of Square\n";
	cout<<"enter the value of side=";
	cin>>c;
	ans1=area_Square(c);
	cout<<"Area of Square="<<ans1;
	
	cout<<"\n\nCalculate the Area of Circle\n";
	cout<<"enter the value of radius=";
	cin>>c;
	ans1=area_Circle(c);
	cout<<"Area of Circle="<<ans1;
	
	cout<<"\n\nCalculate the Volume of cuboid\n";
	cout<<"enter the value of length breight and height=";
	cin>>c>>d>>e;
	ans1=volume_cuboid(c,d,e);
	cout<<"Volume of cuboid="<<ans1;
	
	cout<<"\n\nCalculate the Volume of cube\n";
	cout<<"enter the value of side=";
	cin>>c;
	ans1=volume_cube(c);
	cout<<"Volume of cube="<<ans1;
	
	cout<<"\n\nCalculate the Volume of cone\n";
	cout<<"enter the value of redius and height=";
	cin>>c>>d;
	ans1=volume_cone(c,d);
	cout<<"Volume of cone="<<ans1;
	
	cout<<"\n\nCalculate the Volume of cylinder\n";
	cout<<"enter the value of redius and height=";
	cin>>c>>d;
	ans1=volume_cylinder(c,d);
	cout<<"Volume of cylinder="<<ans1;
	
	cout<<"\n\nswap two variables\n";
	cout<<"enter the two numbers=";
	cin>>a>>b;
	swap(a,b);
	cout<<"Swapping of two variable -- "<<a<<" "<<b;
	
	cout<<"\n\nReverse a three digit number\n";
	cout<<"Enter the three digit number=";
	cin>>a;
	ans=reverse(a);
	cout<<"Reverse a three digit number="<<ans;
	
	cout<<"\n\nconvert kilometre to meter\n";
	cout<<"Enter the kilometer=";
	cin>>a;
	ans=km(a);
	cout<<"Meter="<<ans;
	
	cout<<"\n\nconvert Celsius to Fahrenheit\n";
	cout<<"Enter the tempreture in Celsius=";
	cin>>a;
	ans1=temp(a);
	cout<<"Meter="<<ans1;

	cout<<"\n\nCalculate (a+b)2  and (a-b)2\n";
	cout<<"enter the two numbers=";
	cin>>a>>b;
	ab_2(&a,&b,&ans,&ans2);
	cout<<"(a+b)2="<<ans;
	cout<<"\n(a-b)2="<<ans2;
	
	return 0;
}

int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

int sub(int x,int y)
{
	int z;
	z=x-y;
	return z;
}

int multi(int x,int y)
{
	int z;
	z=x*y;
	return z;
}

int dev(int x,int y)
{
	int z;
	z=x/y;
	return z;
}

float area_tri(float x,float y)
{
	float z;
	z=0.5*x*y;
	return z;
}

float area_rect(float x,float y)
{
	float z;
	z=x*y;
	return z;
}

float area_Square(float x)
{
	float z;
	z=x*x;
	return z;
}

float area_Circle(float x)
{
	float z;
	z=3.1452*x*x;
	return z;
}

float volume_cuboid(float x,float y,float z)
{
	float ans;
	ans=x*y*z;
	return ans;
}

float volume_cube(float x)
{
	float ans;
	ans=x*x*x;
	return ans;
}

float volume_cone(float x,float y)
{
	float ans;
	ans=(3.1452*x*x*y)/3;
	return ans;
}

float volume_cylinder(float x,float y)
{
	float ans;
	ans=3.1452*x*x*y;
	return ans;
}

int swap (int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int reverse(int x)
{
	int rev,n1,n2;
	n1=x%10;
	x=x/10;
	n2=x%10;
	x=x/10;
	rev=n1*100+n2*10+x;
	return rev;
}

int km(int x)
{
	int m;
	m=1000*x;
	return m;
}

float temp(int x)
{
	float fah;
	fah=1.8*x+32;
	return fah;
}

int ab_2(int *x,int *y,int *z1,int *z2)
{
	*z1=*x**x+2**x**y+*y**y;
	*z2=*x**x-2**x**y+*y**y;
}


