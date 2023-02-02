#include<iostream>
using namespace std;
int main()
{
	int A,B,C,D,E,Y;
	char ans,opt;
	cout<<"--------------------------------------------------------------------------------------------------------------\n";
	cout<<"                                                                                                                                   \n";
	cout<<"!!				H e l l o   W e l c o m e   to   K B C				!!\n\n\n";
	cout<<"                                                                                                                                   \n";
	cout<<"--------------------------------------------------------------------------------------------------------------\n";

	cout<<"\nReady for your 1st Question which is on your screen :";
	cout<<"\nQ.1 September 27 is celebrated every year as :";
	cout<<"\n A.Teachers Day";
	cout<<"\n B.National Integration Day";
	cout<<"\n C.World Tourism Day";
	cout<<"\n D.International Literacy Day";
	cout<<"\n E.Quite";
	Wrong_1:
	cout<<"\nSelect Your Answer :";
	cin>>ans;
	if(ans=='C') //Q.1
	{
		cout<<"\nYour answer is Correct .";
		cout<<"\nYou won Rs.1000\n";
		Next_1:
		cout<<"Are you ready for Next Question : (Please press Y for next Question)";
		cin>>opt;
		if(opt=='Y')// Q.1
		{
			cout<<"\nYour Next Question is on your screen .\n";
			cout<<"\nQ.2 Bahubali festival is related to :";
        	cout<<"\n A.Islam ";
        	cout<<"\n B.Hinduism";
			cout<<"\n C.Buddhism";
			cout<<"\n D.Jainism";
			cout<<"\n E.Quite";
			Wrong_2:
			cout<<"\n Select Your Answer :";
			cin>>ans;
			if(ans=='D')// Q.2
			{
				cout<<"\nYour Answer is correct \nYou won Rs.2000 .\n";
				Next_2:
				cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
				cin>>opt;
				if(opt=='Y') // Q.3
				{
					cout<<"\nYour Next Question is on your screen .\n";
					cout<<"\nQ.3 The International Literacy Day is observed on :";
					cout<<"\n A.Sep 8";
					cout<<"\n B.Nov 28";
					cout<<"\n C.May 2";
					cout<<"\n D.Sep 22";
					cout<<"\n E.Quite";
					Wrong_3:
					cout<<"\nEnter Your Answer :";
					cin>>ans;
					if(ans=='A') 	// Q.3
					{
						cout<<"\nYour answer is correct. \nYou won Rs.3000\n";
						Next_3:
						cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
						cin>>opt;
						if(opt=='Y')   // Q.4
						{
							cout<<"\nYour Next Question is on your screen .\n";
							cout<<"\nQ.4 The language of Lakshadweep.Union Territory of India ,is ";
							cout<<"\n A.Tamil";
							cout<<"\n B.Hindi";
							cout<<"\n C.Malayalam";
							cout<<"\n D.Telugu";
							cout<<"\n E.Quite";
							Wrong_4:
							cout<<"\n Enter your answer :";
							cin>>ans;
							if(ans=='C') // Q.4
							{
								cout<<"\nYour answer is correct. \nYou won Rs.5000\n";
								Next_4:
								cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
								cin>>opt;
								if(opt=='Y')
								{
									cout<<"\nYour Next Question is on your screen .\n";
									cout<<"\nQ.5 Pongal is  the popular festival of which state ;";
									cout<<"\n A.Karnataka";
									cout<<"\n B.Kerala";
									cout<<"\n C.Tamil Ladu";
									cout<<"\n D.Andhra Pradesh";
									cout<<"\n E.Quite";
									Wrong_5:
									cout<<"\nEnter your answer :";
									cin>>ans;
									if(ans=='C')
									{
										cout<<"\nYour answer is correct. \nYou won Rs.10000\n";
										Next_5:
										cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
										cin>>opt;
										if(opt=='Y')
										{
											cout<<"\nYour Next Question is on your screen .\n";
											cout<<"\nQ.6 Ghatotkach in Mahabharat was the son of ";
											cout<<"\n A.Duryodhana";
											cout<<"\n B.Arjuna";
											cout<<"\n C.Yudhishthir";
											cout<<"\n D.Bhima";
											cout<<"\n E.Quite";
											Wrong_6:
											cout<<"\nEnter your answer";
											cin>>ans;
											if(ans=='D')
											{
												cout<<"\nYour answer is correctn. \nYou won Rs.20000\n";
												Next_6:
												cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
												cin>>opt;
												if(opt=='Y')
												{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.7 Central salt and marine chemicals research institute is located at ";
													cout<<"\n A.Ahmedabad";
													cout<<"\n B.Bhavnagar";
													cout<<"\n C.Gandhinagar";
													cout<<"\n D.Panaji";
													cout<<"\n E.Quite";
													Wrong_7:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='D')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.40000\n";
													Next_7:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.8 Which of the following year was celebrated as the World Cummunication Year ?";
													cout<<"\n A.1981";
													cout<<"\n B.1983";
													cout<<"\n C.1985";
													cout<<"\n D.1987";
													cout<<"\n E.Quite";
													Wrong_8:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='B')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.80000\n";
													Next_8:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.9 Which of the following is a folk dance of India ?";
													cout<<"\n A.Kathakali";
													cout<<"\n B.Mohiniattam";
													cout<<"\n C.Garba";
													cout<<"\n D.Manipuri";
													cout<<"\n E.Quite";
													cout<<"\nEnter your answer";
													Wrong_9:
													cin>>ans;
													if(ans=='C')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.160000\n";
													Next_9:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.10 Dogri is spoken in which of the following states";
													cout<<"\n A.Bihar";
													cout<<"\n B.Orissa";
													cout<<"\n C.Assam";
													cout<<"\n D.Jammu & Kashmir";
													cout<<"\n E.Quite";
													Wrong_10:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='D')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.320000\n";
													Next_10:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
														cout<<"\nYour Next Question is on your screen .\n";
														cout<<"\nQ.11 Who co-created the UNIX operating system in 1969 with Dennis Ritchie ?";
														cout<<"\n A.Bjarne Shroutrup";
														cout<<"\n B.Steve Wozniak";
														cout<<"\n C.Ken Thompson";
														cout<<"\n D.Niklus Wirth";
														cout<<"\n E.Quite";
														Wrong_11:
														cout<<"\nEnter your answer";
														cin>>ans;
														if(ans=='C')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.640000\n";
													Next_11:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.12 The currency of Greece is ";
													cout<<"\n A.Lira";
													cout<<"\n B.Peseta";
													cout<<"\n C.Drachma/Euro";
													cout<<"\n D.Krone";
													cout<<"\n E.Quite";
													Wrong_12:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='C')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.1250000\n";
													Next_12:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.13 Who is considered the 'Father of Indian Films'?";
													cout<<"\n A.Prithviraj Kapoor";
													cout<<"\n B.Dada Saheb Phalke";
													cout<<"\n C.Raj Kapoor";
													cout<<"\n D.Amitabh Bachchan";
													cout<<"\n E.Quite";
													Wrong_13:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='B')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.2500000\n";
													Next_13:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.14 Who invented the first controllable flying AEROPLANE(AIRPLANE)";
													cout<<"\n A.Wright Brothers";
													cout<<"\n B.Lidenbergh Brothers";
													cout<<"\n C.South Brothers";
													cout<<"\n D.West Brothers";
													cout<<"\n E.Quite";
													Wrong_14:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='A')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.5000000\n";
													Next_14:
													cout<<"Are you ready for Next Question (Please press Y for next Question) : ";
													cin>>opt;
													if(opt=='Y')
													{
													cout<<"\nYour Next Question is on your screen .\n";
													cout<<"\nQ.15 Name the bird that enters a saltwater crocodiles mouth to pick out the paarasites and food paricles";
													cout<<"\n A.Sparrow";
													cout<<"\n B.Kingfisher";
													cout<<"\n C.Crow";
													cout<<"\n D.Nile Plover";
													cout<<"\n E.Quite";
													Wrong_15:
													cout<<"\nEnter your answer";
													cin>>ans;
													if(ans=='D')
													{
													cout<<"\nYour answer is correct. \nYou won Rs.10000000\n";
													}
													else if(ans=='E') //Q.15
													{
													cout<<"\nYou quite the game. \nYou won Rs.5000000";
   													}
  													else if(ans=='C' || ans=='A' ||ans=='B') // Q.15
 													{
  													cout<<"\nYour answer is wrong. \nYou won Rs.320000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_15;
													}
													cout<<"\n!!			C  o  n  g  r  a  t  u  l  a  t  i  o  n  s.		!! \n";
													cout<<"\n!!	 	You Won KBC and You won Rs. 1crors .	!!";
	
													}
													else
													{
														goto Next_14;
													}
													
													
													}
													else if(ans=='E')  // Q.14
													{
													cout<<"\nYou quite the game. \nYou won Rs.2500000";
												    }
   												 	else if(ans=='C' || ans=='D' ||ans=='B')// Q.14
   													{
    												cout<<"\nYour answer is wrong. \nYou won Rs.320000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_14;
													}
													}
													else
													{
														goto Next_13;
													}
													}
													else if(ans=='E') // Q.13
													{
													cout<<"\nYou quite the game. \nYou won Rs.1250000";
    												}
   													else if(ans=='C' || ans=='D' ||ans=='A')// Q.13
 													{
  												  	cout<<"\nYour answer is wrong. \nYou won Rs.320000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_13;
													}
													}
													else
													{
														goto Next_12;
													}
													}
													else if(ans=='E')//Q.12
													{
													cout<<"\nYou quite the game. \nYou won Rs.640000";
    												}
    												else if(ans=='B' || ans=='D' ||ans=='A')// Q.12
    												{
   												 	cout<<"\nYour answer is wrong. \nYou won Rs.320000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_12;
													}
													}
													else
													{
														goto Next_11;
													}
													}
													else if(ans=='E')// Q.11
													{
													cout<<"\nYou quite the game. \nYou won Rs.320000";
  													}
   													else if(ans=='B' || ans=='D' ||ans=='A')// Q.11
  													{
   												 	cout<<"\nYour answer is wrong. \nYou won Rs.320000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_11;
													}
													}
													else
													{
														goto Next_10;
													}
													}
													else if(ans=='E') // Q.10
													{
													cout<<"\nYou quite the game. \nYou won Rs.160000";
   													}
   													else if(ans=='B' || ans=='C' ||ans=='A')// Q.10
   													{
    												cout<<"\nYour answer is wrong. \nYou won Rs10000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_10;
													}
													
													}
													else
													{
														goto Next_9;
													}
													}
													else if(ans=='E')//Q .9
													{
													cout<<"\nYou quite the game. \nYou won Rs.80000";
 													}
    												else if(ans=='B' || ans=='D' ||ans=='A')// Q.9
    												{
    												cout<<"\nYour answer is wrong. \nYou won Rs.10000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_9;
													}
													}
													else
													{
														goto Next_8;
													}
													}
													else if(ans=='E') //Q .8
													{
													cout<<"\nYou quite the game. \nYou won Rs.40000";
    												}
  													else if(ans=='C' || ans=='D' ||ans=='A') //Q.8
   									     			{
    												cout<<"\nYour answer is wrong. \nYou won Rs.10000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_8;
													}
													}
													else
													{
														goto Next_7;
													}
													}
													else if(ans=='E') //Q.7
													{
													cout<<"\nYou quite the game. \nYou won Rs.20000";
    												}
    												else if(ans=='C' || ans=='B' ||ans=='A') //Q .7
    												{
    												cout<<"\nYour answer is wrong. \nYou Won Rs.10000";
													}
													else
													{
													cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
													goto Wrong_7;
													}
												}
												else
												{
													goto Next_6;
												}
											}
											else if(ans=='E')//Q.6
											{
												cout<<"\nYou quite the game. \nYou won Rs.10000";
   											}
   											 else if(ans=='C' || ans=='B' ||ans=='A')//Q.6
    										{
 											   	cout<<"\nYour answer is wrong. \nYou won Rs.10000";
											}
											else
											{
											cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
											goto Wrong_6;
											}
										}
										else
										{
											goto Next_5;
										}
									
									}
									else if(ans=='E')//Q.5
									{
										cout<<"\nYou quite the game. \nYou won Rs.5000";
									}
									else if(ans=='D' || ans=='B' ||ans=='A')// Q.5
									{
										cout<<"\nYour answer is wrong.";
									}
									else
									{
									cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
									goto Wrong_5;
									}
								}
								else
								{
									goto Next_4;
								}
							}
							else if(ans=='E')  // Q.4
							{
								cout<<"\nYou quite the game. \nYou won Rs.3000";
							}
							else if(ans=='D' || ans=='B' ||ans=='A') // Q.4
							{
								cout<<"\nYour answer is wrong.";
							}
							else
							{
							cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
							goto Wrong_4;
							}
						}
						else
						{
							goto Next_3;
						}
					}
					else if(ans=='E')	// Q.3
					{
						cout<<"\nYou quite the game. \nYou won Rs.2000";
					}
					else if(ans=='D' || ans=='B' ||ans=='C')// Q.3
					{
						cout<<"Your answer is wrong.";
					}
					else
					{
					cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
					goto Wrong_3;
					}

				}
				else
				{
					goto Next_2;
				}
			}
			else if(ans=='E') // Q.2
			{
				cout<<"\nYou quite the game. \nYou won Rs.1000";
			}
			else if(ans=='A' || ans=='B' ||ans=='C')//Q.2
			{
				cout<<"\nYour answer is wrong.";
			}
			else
			{
			cout<<"\nYOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE \n .";
			goto Wrong_2;
			}
			
		}
        else
		{
			goto Next_1;
		}
	}
	else if(ans=='E')//Q.1
	{
		cout<<"\nYou quite the game.";
	}
	
	else if(ans=='A' || ans=='B' ||ans=='D')//Q.1
	{
		cout<<"\nYour answer is wrong.  \nYou have not won any amount .";
	}
	else
	{
		cout<<"\n YOU HAVE PRESSED THE WRONG BUTTON PLEASE CLICK ON THE RIGHT ONE . \n .";
		goto Wrong_1;
	}



	
	
	return 0;
}
