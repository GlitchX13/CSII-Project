/********************************
The MillionaireImplementation.cpp
contains the class constructor
and stores what the functions
actually do
********************************/

#include "MillionaireInterface.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
using namespace std;

//Constructor - Initialize Data Members
million::million() {
	qnum = 1;
	fifty = true;
	call = true;
	ask = true;
	right = false;
	leave = false;
	choice = 'a';
}

million::~million() {
}

player::player()
{
	first = new char[SIZEN];
	millionptr = new million[SIZEN];
	score = 0;
	qnum = 0;
	fifty = true;
	call = true;
	ask = true;
	right = false;
	leave = false;
}

player::~player()
{
	delete [] first;
	delete [] millionptr;
	qnum = 0;
}

void million::Intro(char *name, int &score)
{
	cout << "Player: " << name << "                      Question:"<< qnum << "    Money: $" << score << endl;
	cout << "*****************************************************************";
	cout << "\nHello and welcome back to Who Wants to be a Millionare!\n" << endl
		<<"This week our contestant is " << name << " and will be playing for\n"
		<<"the chance at One Million Dollars.";
	cin.get();
}

void player::table()
{
	system("cls");

	cout << "Question Number: " << qnum << endl;
	if (qnum == 1)
		cout << "Playing for the chance at $500"<<endl;
	else if (qnum == 2)
		cout << "Playing for the chance at $1,000"<<endl;
	else if (qnum == 3)
		cout << "Playing for the chance at $2,000"<<endl;
	else if (qnum == 4)
		cout << "Playing for the chance at $3,000"<<endl;
	else if (qnum == 5)
		cout << "Playing for the chance at $5,000"<<endl;
	else if (qnum == 6)
		cout << "Playing for the chance at $7,000"<<endl;
	else if (qnum == 7)
		cout << "Playing for the chance at $10,000"<<endl;
	else if (qnum == 8)
		cout << "Playing for the chance at $20,000"<<endl;
	else if (qnum == 9)
		cout << "Playing for the chance at $30,000"<<endl;
	else if (qnum == 10)
		cout << "Playing for the chance at $50,000"<<endl;
	else if (qnum == 11)
		cout << "Playing for the chance at $100,000"<<endl;
	else if (qnum == 12)
		cout << "Playing for the chance at $250,000"<<endl;
	else if (qnum == 13)
		cout << "Playing for the chance at $500,000"<<endl;
	else if (qnum == 14)
		cout << "Playing for the chance at $1,000,000"<<endl;

	cin.get();
	system("cls");
}

void million::Question(char *name, int qnum, int &score)
{
	cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << "  Question:"<< qnum << "    Money: $" << score << endl;
	cout << "********************************************************************************************************************";

	if (qnum == 1)
	{
		cout << endl << endl << "Your first question is:\n";
		cout << "What is the first Element on the Periodic Table?\n\n"
			<<"A. Helium\n"
			<<"B. Hydrogen\n"
			<<"C. Oxygen\n"
			<<"D. Nitrogen\n"
			<<"\n--Lifelines--\n"
			<<"E. 50/50\n"
			<<"F. Ask The Audience\n"
			<<"G. Call Home\n";
	}
}

void audience() {
	cout << "\n\nAlright, audience... Go ahead and select which one\n"
		 << "you think is the right answer...\n";

	Sleep(2000);

	cout << "Audience, you have 5"; Sleep(1000);
	cout << ", 4"; Sleep(1000); cout << ", 3"; Sleep(1000);
	cout << ", 2"; Sleep(1000); cout << ", 1..."; Sleep(1000);
	cout << "\n\nAlright, the results are in...\n";
}

void lifeask(int qnum) 
{
	int num;
	if (qnum == 1) 
	{
		srand(time(NULL));
		num = rand() % 4 + 1;

		audience();

		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected B";
		else if (num == 4)
			cout << "The audience has selected D";

		cout << "\n\nAlright, please select an answer...\n\nA. Helium\nB. Hydrogen\nC. Oxygen\nD. Nitrogen\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}
}

void lifecall(int qnum) 
{
	int num;
	if (qnum == 1) 
	{
		srand(time(NULL));
		num = rand() % 4 + 1;
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... A!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... B!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Helium\nB. Hydrogen\nC. Oxygen\nD. Nitrogen\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";

	}
}

void lifehalf(int qnum) 
{
	if (qnum == 1) 
	{
		cout << endl << "Two options have been eliminated... \n \n"
					 << "A. Helium\nB. Hydrogen\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}
}

void million::Choice(char *name, int qnum, bool fifty, bool call, bool ask, int &score, bool &right)
{
	bool loop = true;
	int num;

	do {
		cin >> choice;
		cin.get();

		if ((choice == 'e' || choice == 'E') && fifty == true)
		{
			system("cls");
			fifty = false;

			cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << "  Question:"<< qnum << "    Money: $" << score << endl;
			cout << "********************************************************************************************************************";

			lifehalf(qnum);
			cin >> choice;
			cin.get();
			loop = false;
		}
		else if ((choice == 'e' || choice == 'E') && fifty == false)
			cout << "\nYou have already used your 'Fifty/Fifty'" << endl;

		if ((choice == 'f' || choice == 'F') && ask == true)
		{
			system("cls");
			ask = false;

			cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << "  Question:"<< qnum << "    Money: $" << score << endl;
			cout << "********************************************************************************************************************";

			lifeask(qnum);
			cin >> choice;
			cin.get();
			loop = false;
		}
		else if ((choice == 'f' || choice == 'F') && ask == false)
			cout << "\nYou have already used your 'Ask The Audience'" << endl;

		if ((choice == 'g' || choice == 'G') && call == true)
		{
			system("cls");
			call = false;

			cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << "  Question:"<< qnum << "    Money: $" << score << endl;
			cout << "********************************************************************************************************************";

			cout << "\n\nFriend: Hi there, " << name << "! You're on \nTV? Awesome! \n";
			lifecall(qnum);
			cin >> choice;
			cin.get();
			loop = false;
		}
		else if ((choice == 'g' || choice == 'G') && call == false)
			cout << "\nYou have already used your 'Call Home'" << endl;
		else {
			right = false;
			loop = false;
		}
	} while (loop == true);
}

bool million::Result (char *name, int qnum, bool fifty, bool call, bool ask, int &score, bool &right, bool &leave)
{
	int selection;

	if (qnum == 1) {
		if (choice == 'b' || choice == 'B') {
			right = true;
			score = 500;
		}
	}

	cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << "  Question:"<< qnum << "    Money: $" << score << endl;
	cout << "********************************************************************************************************************";

	if (right == true) {
		cout << endl << endl << "Correct!" << endl 
			 << "Would you like to walk away with " << score << "?" << endl << endl << endl
			 << "...or would you like to keep going for a chance at a million dollars?" << endl;
		do {
			cout << "Take the money home: Enter '1' " << endl << "Keep going: Enter '2' " << endl;

			cin >> selection;
			cin.get();

			if (selection == 1)
				leave = true;
			else if (selection == 2)
				leave = false;
			else
				cout << "Please enter a valid number, " << name << "." << endl << endl;
		} while (selection != 1 && selection != 2);
	}
	else {
		cout << endl << "Ohhh, sorry! That was incorrect." << endl;
		leave = true;
	}

	return leave;
}

void million::Leaving (char *name, int qnum, int &score) 
{
	cout << "Sorry to see you go, " << name << "..." << endl
		 << "However, you did win $" << score << "!" << endl << endl
		 << "Thanks for playing!" << endl;
	cin.get();
}

void player::read()
{
	cout << "Hello! What is your name?(First name only)\n";
	cin >> first;
	while(cin.get()!='\n');
}
void player::playintro()
{
	millionptr[0].Intro(first,score);
}
void player::question()
{
	++qnum;
	table();
	system("cls");
	millionptr[0].Question(first, qnum, score);
}
void player::choice()
{
	millionptr[0].Choice(first, qnum, fifty, call, ask, score, right);
}
bool player::result()
{
	return millionptr[0].Result (first, qnum, fifty, call, ask, score, right, leave);
}
void player::leaving() 
{
	millionptr[0].Leaving (first, qnum, score);
}
