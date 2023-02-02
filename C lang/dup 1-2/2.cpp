#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
float tri(float,float);
float rect(float,float);
float sq(float);
float cir(float);
float cubo(float,float,float);
float cub(float);
float con(float,float);
float cyl(float,float);
int rev(int);



int main()
{
	int  a,b,add1,sub1,mul1,div1,rev1,num;
	float l,br,h,s,r,tri1,rect1,sq1,cir1,cubo1,cub1,con1,cyl1;
	
	
	// Addition :
	
	cout<<"Enter The value of a for addition : ";
	cin>>a;
	cout<<"\nEnter the value of b for addition  : ";
	cin>>b;
	add1=add(a,b);
	cout<<"\nThe addition of a and b is : "<<add1;
	
	// Subtraction : 
	
	Sub_:
	cout<<"\n\nEnter the value of a for subtraction : ";
	cin>>a;
	cout<<"\nEnter the value of b for subtraction : ";
	cin>>b;
	if(a<b)
	{
		cout<<"\nThe first value is small than second value please enter correct value . ";
		goto Sub_;
	}
	sub1=sub(a,b);
	cout<<"\nThe subtraction of a and b is : "<<sub1;
	
	// Multiplication :
	
	cout<<"\n\nEnter the value of a for multiplication : ";
	cin>>a;
	cout<<"\nEnter the value of b for multiplication : ";
	cin>>b;
	mul1=mul(a,b);
	cout<<"\nTha multiplication of a and b is : "<<mul1;
	
	// Division : 
	Div_:
	cout<<"\n\nEnter the value of a for division : ";
	cin>>a;
	cout<<"\nEnter the value of b for division : ";
	cin>>b;
	if(a<b)
	{
		cout<<"\nThe first value is smaller than second value please enter correct value . ";
		goto Div_;
	}
	div1=div(a,b);
	cout<<"\nThe division of two number is : "<<div1;
	
	// AREA OF... 
	
	cout<<"\n\n\n To find ...AREA of...\n\n";
	
	// Area of triangle 
	
	cout<<"\nEnter the base of triangle : ";
	cin>>br;
	cout<<"\nEnter the height of triangle : ";
	cin>>h;
	tri1=tri(br,h);
	cout<<"\nArea of triangle is : "<<tri1;
	
	// Area of rectangle 
	
	cout<<"\n\nEnter the length of rectangle : ";
	cin>>l;
	cout<<"\nEnter the base of rectangle : ";
	cin>>br;
	rect1=rect(l,br);
	cout<<"\nArea of rectangle is : "<<rect1;
	
	// Area of square 
	
	cout<<"\n\nEnter the side of square : ";
	cin>>s;
	sq1=sq(s);
	cout<<"\nArea of square is : "<<sq1;
	
	// Area of circle 
	
	cout<<"\n\nEnter the radius of circle : ";
	cin>>r;
	cir1=cir(r);
	cout<<"\nArea of circle is : "<<cir1;
	
	// Volume 
	
	cout<<"\n\n\nVolume of...\n\n";
	
	// Volume of cuboid 
	
	
	cout<<"\n\nEnter the length of cuboid : ";
	cin>>l;
	cout<<"\nEnter the breadth of cuboid : ";
	cin>>br;
	cout<<"\nEnter the height of cuboid : ";
	cin>>h;
	cubo1=cubo(l,br,h);
	cout<<"\nThe volume of cuboid is : "<<cubo1;
	
	// Volume of cube 
	
	cout<<"\n\nEnter the side of cube : ";
	cin>>s;
	cub1=cub(s);
	cout<<"\nThe volume of cube is : "<<cub1;
	
	// Volume of cuboid 
	
	cout<<"\n\nEnter the radius of cone : ";
	cin>>l;
	cout<<"\nEnter the height of cone : ";
	cin>>b;
	con1=con(r,h);
	cout<<"\nVolume of cone is : "<<con1;
	
	// Volume of Cylinder 
	
	cout<<"\n\nEnter the radius of cylinder : ";
	cin>>l;
	cout<<"\nEnter the height of cylinder : ";
	cin>>b;
	cyl1=cyl(r,h);
	cout<<"\nVolume of cone is : "<<cyl1;
	
	// Reverse 
	
	cout<<"\n\nEnter The Number : ";
	cin>>num;
	rev1=rev(num);
	cout<<"The reverse of number is : "<<rev1;
	
	
	return 0;
}
int add(int x, int y)
{
	int ans;
	ans=x+y;
	return ans;
}
int sub(int x, int y)
{
	int ans;
	ans=x-y;
	return ans;
}
int mul(int x, int y)
{
	int ans;
	ans=x*y;
	return ans;
}
int div(int x, int y)
{
	int ans;
	ans=x/y;
	return ans;
}
float tri(float x,float y)
{
	float ans;
	ans=0.5*x*y;
	return ans;
}
float rect(float x,float y)
{
	float ans;
	ans=x*y;
	return ans;
}
float sq(float x)
{
	float ans;
	ans=x*x;
	return ans;
}
float cir(float x)
{
	float ans;
	ans=3.1452*x*x;
	return ans;
}
float cubo(float x,float y,float z)
{
	float ans;
	ans=x*y*z;
	return ans;
}
float cub(float x)
{
	float ans;
	ans=x*x*x;
	return ans;
}
float con(float x,float y)
{
	float ans;
	ans=(3.1452*x*x*y)/3;
	return ans;
}
float cyl(float x,float y)
{
	float ans;
	ans=3.1452*x*x*y;
	return ans;
}
int rev(int n)
{
	int rem1,rem2,re;
	rem1=n%10;
	n=n/10;
	rem2=n%10;
	n=n/10;
	re=rem1*100+rem2*10+n;
	return re;
}
