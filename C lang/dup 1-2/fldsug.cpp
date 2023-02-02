// 6. after passing 12th everyone is confused that which domin they shoud select.
//    we will design a councelling exam which will guide the student in which domin the student should go.
//    for now we are considering only 3 major domians 1. Science 2. Commerce 3. Arts
//    
//    
//    you have to ask 5 Questions to the students having 4 options 
//    ex:
//        which one will you prefer to do?
//        1. Using Laptop in home
//        2. Explore the Tourist place
//        3. Playing the out door game5
//        4. Solve Mathematical Problems
//        
//        ans1= 1
//
//    According to the answer the ouput will be in top 2 domain priority wise
//        
//        1. Science
//        2. Arts 
//
//    note: Question Will be of your Choice

#include<iostream>
using namespace std;
int main()
{
	int sci=0,com=0,art=0,ans1,ans2,ans3,ans4,ans5;
	cout<<"...Guide... for your next education : ";
	Que_1:
	cout<<"Q . 1 . .....";
	cout<<"\n\n1). Science ";
	cout<<"\n2). Commerce ";
	cout<<"\n3). Art ";
	cout<<"\n4). Science ";
	
	cout<<"\n\nEnter Your Answer : ";
	cin>>ans1;
	if(ans1==1)
	{
		sci++;
	}
	else if(ans1==2)
	{
		com++;
	}
	else if(ans1==3)
	{
		art++;
	}
	else if(ans1==4)
	{
		sci++;
	}
	else
	{
		goto Que_1;
	}
	
	
	
	Que_2:
	cout<<"\n\nQ . 2 . .....";
	cout<<"\n\n1). Science";
	cout<<"\n2). Commerce";
	cout<<"\n3). Art ";
	cout<<"\n4). Commerce ";
	
	cout<<"\n\nEnter Your Answer : ";
	cin>>ans2;
	if(ans2==1)
	{
		sci++;
	}
	else if(ans2==2)
	{
		com++;
	}
	else if(ans2==3)
	{
		art++;
	}
	else if(ans2==4)
	{
		com++;
	}
	else
	{
		goto Que_2;
	}
	
	Que_3:
	cout<<"\n\nQ . 3 . .....";
	cout<<"\n\n1). Science ";
	cout<<"\n2). Commerce ";
	cout<<"\n3). Art ";
	cout<<"\n4). Art ";
	
	cout<<"\n\nEnter Your Answer : ";
	cin>>ans3;
	if(ans3==1)
	{
		sci++;
	}
	else if(ans3==2)
	{
		com++;
	}
	else if(ans3==3)
	{
		art++;
	}
	else if(ans3==4)
	{
		art++;
	}
	else
	{
		goto Que_3;
	}
	
	Que_4:
	cout<<"\n\nQ . 4 . .....";
	cout<<"\n\n1). Science";
	cout<<"\n2). Commerce";
	cout<<"\n3). Art";
	cout<<"\n4). Science";
	
	cout<<"\n\nEnter Your Answer : ";
	cin>>ans4;
	if(ans4==1)
	{
		sci++;
	}
	else if(ans4==2)
	{
		com++;
	}
	else if(ans4==3)
	{
		art++;
	}
	else if(ans4==4)
	{
		sci++;
	}
	else
	{
		goto Que_4;
	}
	
	
	Que_5:
	cout<<"\n\nQ . 5 . .....";
	cout<<"\n\n1). Science ";
	cout<<"\n2). Commerce ";
	cout<<"\n3). Art ";
	cout<<"\n4). Commerce ";
	
	cout<<"\n\nEnter Your Answer : ";
	cin>>ans5;
	if(ans5==1)
	{
		sci++;
	}
	else if(ans5==2)
	{
		com++;
	}
	else if(ans5==3)
	{
		art++;
	}
	else if(ans5==4)
	{
		com++;
	}
	else
	{
		goto Que_5;
	}
	
	cout<<"\n\nThe science  ratio is : "<<sci;
	cout<<"\n\nThe commerce ratio is : "<<com;
	cout<<"\n\nThe   art    ratio is : "<<art;
	
	if(sci>com && sci>art)
	{
		cout<<"\n\nYour interest are shown in science . you shoud go for science faculty . ";
	}
	else if(com>sci && com>art)
	{
		cout<<"\n\nYour interest are shown in commerce . you shoud go for commerce faculty . ";
	}
	else if(art>sci && art>art)
	{
		cout<<"\n\nYour interest are shown in art . you shoud go for art faculty . ";
	}
	else if(sci==2 && com==2 || art==1 )
	{
		cout<<"\n\nYour interest are shown in both science and commerce faculty . You shoud go for any one of them  . ";
	}
	else if(sci==2 && art==2 || com==1 )
	{
		cout<<"\n\nYour interest are shown in both science and art faculty . You shoud go for any one of them  . ";
	}
	else if(art==2 && com==2 || sci==1 )
	{
		cout<<"\n\nYour interest are shown in both commerce and art faculty . You shoud go for any one of them  . ";
	}
	else
	{
		cout<<"NO ANSWER MATCH .";
	}
	
	return 0;
}


