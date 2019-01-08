#include <iostream.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboC3\\bgi");
    setcolor(3);
    cout<<"Hello everyone!!"<<endl;
    cout<<"This is rather an interesting game"<<endl;
    cout<<"In this game you have to tell whether the next number to be presented is greater than or less than the previous number"<<endl;
    cout<<"To enter your choice, enter H(Higher) if you think the number to be presented is greater 5 and L(Lower) if you think the number the be presented is lesser than 5 "<<endl;
    cout<<"You can play the game until you make three mistakes"<<endl;
    cout<<"At the end of the game, you will be shown the number of right guesses made by you"<<endl;
    cout<<"So, tighten your seatbelts and lets get started"<<endl;
    int next;
    int previous=5;
    int mistakes=0;
    int correct=0;
    char choice;
    do
    {
	srand(time(NULL));
	next=rand()%10;
	if(next==previous)
	{
	    srand(time(NULL));
	    next=rand()%10;
	}
	setcolor(14);
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	if((choice=='H')||(choice=='h'))
	{
	    if(next>previous)
	    {
		setcolor(4);
		cout<<"Correct. Next number is "<<next<<endl;
		correct++;
	    }
	    else
	    {
		setcolor(2);
		cout<<"Wrong guess. Next number is "<<next<<endl;
		mistakes++;
	    }
	}
	 else if((choice=='L')||(choice=='l'))
	{
	    if(next<previous)
	    {
		setcolor(4);
		cout<<"Correct. Next number is "<<next<<endl;
		correct++;
	    }
	    else
	    {
		setcolor(2);
		cout<<"Wrong guess. Next number is "<<next<<endl;
		mistakes++;
	    }
	}
	else
	{
		setcolor(5);
	    cout<<"Please enter a valid choice"<<endl;
	}
    }
    while(mistakes<3);
    cout<<"YOu have made 3 mistakes. Game is over now";
    cout<<"You have made "<<correct<<" correct choices"<<endl;
    getch();
    closegraph();
    return 0;
}
