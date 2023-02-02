//6.  after passing 12th everyone is confused that which domin they shoud select.
//    we will design a councelling exam which will guide the student in which domin the student should go.
//    for now we are considering only 3 major domians 1. Science 2. Commerce 3. Arts
//	
//	
//    you have to ask 5 Questions to the students having 4 options 
//	ex:
//		which one will you prefer to do?
//		1. Using Laptop in home
//		2. Explore the Tourist place
//		3. Playing the out door game
//		4. Solve Mathematical Problems
//		
//		ans1= 1
//
//	According to the answer the ouput will be in top 2 domain priority wise
//		
//		1. Science
//		2. Arts 
//
//	note: Question Will be of your Choice



#include<iostream>
using namespace std;


int main()
{
	int sci=0,art=0,comm=0,ans;
	
	
	cout<<"guide the student in which domin the student should go.\n\n";
	cout<<"you have to ask 5 Questions to the students having 4 options\n";
	cout<<"You do not quit any quetion.";
	
	que1:
	cout<<"\n\nQ1.......\n\n";
	cout<<"1)Science\n";
	cout<<"2)Art\n";
	cout<<"3)Commerce\n";
	cout<<"4)Science\n";
	
	cout<<"Enter your choice=";
	cin>>ans;
	
	if(ans==1 || ans==4)
	{
		sci++;
	}
	else if(ans==2)
	{
		art++;
	}
	else if(ans==3)
	{
		comm++;
	}
	else 
	{
		cout<<"\nInvalid Answer.\nPlease put valid Answer";
		goto que1;
	}
	
	
	que2:
	cout<<"\n\nQ2.......\n\n";
	cout<<"1)Science\n";
	cout<<"2)Art\n";
	cout<<"3)Commerce\n";
	cout<<"4)Art\n";
	
	cout<<"Enter your choice=";
	cin>>ans;
	
	if(ans==1)
	{
		sci++;
	}
	else if(ans==2 || ans==4)
	{
		art++;
	}
	else if(ans==3)
	{
		comm++;
	}
	else 
	{
		cout<<"\nInvalid Answer.\nPlease put valid Answer";
		goto que2;
	}
	
	
	que3:
	cout<<"\n\nQ3.......\n\n";
	cout<<"1)Science\n";
	cout<<"2)Art\n";
	cout<<"3)Commerce\n";
	cout<<"4)Commerce\n";
	
	cout<<"Enter your choice=";
	cin>>ans;
	
	if(ans==1)
	{
		sci++;
	}
	else if(ans==2)
	{
		art++;
	}
	else if(ans==3 || ans==4)
	{
		comm++;
	}
	else 
	{
		cout<<"\nInvalid Answer.\nPlease put valid Answer";
		goto que3;
	}
	
	que4:
	cout<<"\n\nQ4.......\n\n";
	cout<<"1)Science\n";
	cout<<"2)Art\n";
	cout<<"3)Commerce\n";
	cout<<"4)Science\n";
	
	cout<<"Enter your choice=";
	cin>>ans;
	
	if(ans==1 || ans==4)
	{
		sci++;
	}
	else if(ans==2)
	{
		art++;
	}
	else if(ans==3)
	{
		comm++;
	}
	else 
	{
		cout<<"\nInvalid Answer.\nPlease put valid Answer";
		goto que4;
	}
	
	que5:
	cout<<"\n\nQ5.......\n\n";
	cout<<"1)Science\n";
	cout<<"2)Art\n";
	cout<<"3)Commerce\n";
	cout<<"4)Art\n";
	
	cout<<"Enter your choice=";
	cin>>ans;
	
	if(ans==1)
	{
		sci++;
	}
	else if(ans==2 || ans==4)
	{
		art++;
	}
	else if(ans==3)
	{
		comm++;
	}
	else 
	{
		cout<<"\nInvalid Answer.\nPlease put valid Answer";
		goto que5;
	}
	
	
	cout<<"\n\nThe Science ratio is="<<sci;
	cout<<"\n\nThe Art ratio is="<<art;
	cout<<"\n\nThe Commerce ratio is="<<comm;
	
	
	
	
	if(sci>art && sci>comm)
	{
		cout<<"\n\nAccording to the your answer your interect are shown in Science Stream \n\nshould go for Science Stream";
	}
	else if(art>sci && art>comm)
	{
		cout<<"\n\nAccording to the your answer your interect are shown in Science Stream \n\nshould go for Art Stream";
	}
	else if(comm>art && comm>sci)
	{
		cout<<"\n\nAccording to the your answer your interect are shown in Science Stream \n\nshould go for Commerce Stream";
	}
	else if(sci==art && sci>comm && art>comm)
	{
		cout<<"\n\nAccording to the your answer your interect are shown in Science Stream \n\nshould go for Science Stream OR Art Stream";
	}
	else if(sci==comm && sci>art && comm>art)
	{
		cout<<"\n\nAccording to the your answer your interect are shown in Science Stream \n\nshould go for Science Stream OR Commerce Stream";
	}
	else if(art==comm && art>sci && comm>sci)
	{
		cout<<"\n\nAccording to the your answer your interect are shown in Science Stream \n\nshould go for Commerce Stream OR Art Stream";
	}
	
	
	return 0;
}
