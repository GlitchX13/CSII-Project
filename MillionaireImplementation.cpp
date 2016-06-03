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
#pragma comment(lib, "winmm.lib")
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

//Destructor - Uninitialize allocated memory
million::~million() {
}
//Constructor - Initialize Data Members
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
//Destructor - Uninitialize allocated memory
player::~player()
{
	delete [] first;
	delete [] millionptr;
	qnum = 0;
}
/* *****************************************************
In the Intro function the player is introduced to the
game and will press enter to move on to questions.
**************************************************** */
void million::Intro(char *name, int &score)
{
	cout << "Player: " << name << "                      Question:"<< qnum << "    Money: $" << score << endl;
	cout << "*****************************************************************";
	cout << "\nHello and welcome back to Who Wants to be a Millionare!\n" << endl
		<<"This week our contestant is " << name << " and will be playing for\n"
		<<"the chance at One Million Dollars.";
	cin.get();
}
/* *****************************************************
The Table shows the Question and the amount of money 
they are playing for. 
**************************************************** */
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
		cout << "Playing for the chance at $1,000,000"<<endl << endl;

	printf(" %-10s| %-10s|\n", "AMOUNT $", " ");

	if (qnum == 14)
		printf(" %-10s| %-10s|\n", "1,000,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "1,000,000", " ");
	
	if (qnum == 13)
		printf(" %-10s| %-10s|\n", "500,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "500,000", " ");

	if (qnum == 12)
		printf(" %-10s| %-10s|\n", "250,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "250,000", " ");

	if (qnum == 11)
		printf(" %-10s| %-10s|\n", "100,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "100,000", " ");

	if (qnum == 10)
		printf(" %-10s| %-10s|\n", "50,000", "<--- SAFETY");
	else
		printf(" %-10s| %-10s|\n", "50,000", "SAFETY");

	if (qnum == 9)
		printf(" %-10s| %-10s|\n", "30,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "30,000", " ");

	if (qnum == 8)
		printf(" %-10s| %-10s|\n", "20,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "20,000", " ");

	if (qnum == 7)
		printf(" %-10s| %-10s|\n", "10,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "10,000", " ");

	if (qnum == 6)
		printf(" %-10s| %-10s|\n", "7,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "7,000", " ");

	if (qnum == 5)
		printf(" %-10s| %-10s|\n", "5,000", "<--- SAFETY");
	else
		printf(" %-10s| %-10s|\n", "5,000", "SAFETY");

	if (qnum == 4)
		printf(" %-10s| %-10s|\n", "3,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "3,000", " ");

	if (qnum == 3)
		printf(" %-10s| %-10s|\n", "2,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "2,000", " ");

	if (qnum == 2)
		printf(" %-10s| %-10s|\n", "1,000", "<---");
	else
		printf(" %-10s| %-10s|\n", "1,000", " ");

	if (qnum == 1)
		printf(" %-10s| %-10s|\n", "500", "<---");
	else
		printf(" %-10s| %-10s|\n", "500", " ");

	cin.get();
	system("cls");
}
/* *****************************************************
These are all of the questions for the game.
**************************************************** */
void million::Question(char *name, int qnum, int &score,bool &fifty,bool &call,bool &ask)
{
	cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << endl << "  Question:"<< qnum << "    Money: $" << score << endl;
	cout << "*****************************************************************";
	//Question 1
	if (qnum == 1)
	{
		cout << "\nWhat is the first Element on the Periodic Table?\n\n"
			<<"A. Helium\n"
			<<"B. Hydrogen\n"
			<<"C. Oxygen\n"
			<<"D. Nitrogen\n"
			<<"\n--Lifelines--\n"
			<<"E. 50/50\n"
			<<"F. Ask The Audience\n"
			<<"G. Call Home\n";
	}
	//Question 2
	else if (qnum == 2)
	{
		cout << "\nThe duck billed platypus is native to what country?\n\n"
			<<"A. United States\n"
			<<"B. Afganistan\n"
			<<"C. Bikini Bottom\n"
			<<"D. Australia\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 3
	else if (qnum == 3)
	{
		cout << "\nThe Statue of Liberty was a gift to the United States from which country?\n\n"
			<<"A. United States\n"
			<<"B. Afganistan\n"
			<<"C. France\n"
			<<"D. Australia\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 4
	else if (qnum == 4)
	{
		cout << "\nWhat year was the first Super Bowl played?\n\n"
			<<"A. 1967\n"
			<<"B. 1966\n"
			<<"C. 2000\n"
			<<"D. 2016\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 5
	else if (qnum == 5)
	{
		cout << "\nA puggle is a cross between which two dog breeds?\n\n"
			<<"A. Pitbull and Poodle\n"
			<<"B. Poodle and Pug\n"
			<<"C. Pug and Beagle\n"
			<<"D. Pitbull and Beagle\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 6
	else if (qnum == 6)
	{
		cout << "\nWho was the female lead in the movie Titanic?\n\n"
			<<"A. Angelina Jolie\n"
			<<"B. Kate Winslet\n"
			<<"C. Jennifer Aniston\n"
			<<"D. Scarlett Johansson\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Quiestion 7
	else if (qnum == 7)
	{
		cout << "\nNew Orleans is known as the birthplace of what type of music?\n\n"
			<<"A. Country\n"
			<<"B. Rap\n"
			<<"C. Jazz\n"
			<<"D. Rock\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 8
	else if (qnum == 8)
	{
		cout << "\nThe average american does what 22 times a day?\n\n"
			<<"A. Stretches\n"
			<<"B. Greets Someone\n"
			<<"C. Opens a Fridge\n"
			<<"D. Looks at Time\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 9
	else if (qnum == 9)
	{
		cout << "\n25% of americans believe what fictional character is real?\n\n"
			<<"A. Shrek\n"
			<<"B. Sherlock Holmes\n"
			<<"C. Mulan\n"
			<<"D. Elizabeth Bennett\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 10
	else if (qnum == 10)
	{
		cout << "\nWhat is a traditional fermented Korean side dish made seasoned \nvegetables and salt?\n\n"
			<<"A. Kimchi\n"
			<<"B. Chow Mein\n"
			<<"C. Bibimbap\n"
			<<"D. Sigpum\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 11
	else if (qnum == 11)
	{
		cout << "\nMalcolm Little was a civil rights activist better known by what name?\n\n"
			<<"A. Alcoman\n"
			<<"B. Malcolm Z\n"
			<<"C. Malscorm\n"
			<<"D. Malcolm X\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 12
	else if (qnum == 12)
	{
		cout << "\nThe meat of a game animal, such as deer, is called what?\n\n"
			<<"A. Steak\n"
			<<"B. Grouse\n"
			<<"C. Venison\n"
			<<"D. Red Meat\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 13
	else if (qnum == 13)
	{
		cout << "\nThe US military installation Area 51 is located in which state?\n\n"
			<<"A. Nevada\n"
			<<"B. Colorado\n"
			<<"C. Texas\n"
			<<"D. Florida\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
	//Question 14
	else if (qnum == 14)
	{
		cout << "\nWhat is the highest number of Michelin stars a restaurant can receive?\n\n"
			<<"A. 5\n"
			<<"B. 100\n"
			<<"C. 10\n"
			<<"D. 3\n"
			<<"\n--Lifelines--\n"
			<<"E. For the 50/50 lifeline\n"
			<<"F. Ask the Audience\n"
			<<"G. Call Home\n";
	}
}

/* *****************************************************
The Audience function is the intro to the
Ask the audience lifeline and can only be used once 
throught the game.
**************************************************** */
void audience() {
	cout << "\n\nAlright, audience... Go ahead and select which one\n"
		 << "you think is the right answer...\n";

	Sleep(2000);

	cout << "Audience, you have 5"; Sleep(1000);
	cout << ", 4"; Sleep(1000); cout << ", 3"; Sleep(1000);
	cout << ", 2"; Sleep(1000); cout << ", 1..."; Sleep(1000);
	cout << "\n\nAlright, the results are in...\n";
}

/* *****************************************************
The lifeask function is the ask the audience
life line output.
**************************************************** */
void lifeask(int qnum) 
{
	int num;

	srand(time(NULL));
	num = rand() % 4 + 1;
	audience();
	//Question 1
	if (qnum == 1) {  //checks the question number
		if (num == 1 || num == 2 || num == 3) //gives a 75% chace of the right answer
			cout << "The audience has selected B";//Right Answer
		else if (num == 4)
			cout << "The audience has selected D";//Wrong Answer

		cout << "\n\nAlright, please select an answer...\n\nA. Helium\nB. Hydrogen\nC. Oxygen\nD. Nitrogen\n"  //gives choices again and says no other life lines.
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 2
	else if (qnum == 2) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected D";
		else if (num == 4)
			cout << "The audience has selected B";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. United States\n"
			<<"B. Afganistan\n"
			<<"C. Bikini Bottom\n"
			<<"D. Australia\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 3
	else if (qnum == 3) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected C";
		else if (num == 4)
			cout << "The audience has selected A";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. United States\n"
			<<"B. Afganistan\n"
			<<"C. France\n"
			<<"D. Australia\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 4
	else if (qnum == 4) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected A";
		else if (num == 4)
			cout << "The audience has selected D";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. 1967\n"
			<<"B. 1966\n"
			<<"C. 2000\n"
			<<"D. 2016\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 5
	else if (qnum == 5) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected C";
		else if (num == 4)
			cout << "The audience has selected B";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Pitbull and Poodle\n"
			<<"B. Poodle and Pug\n"
			<<"C. Pug and Beagle\n"
			<<"D. Pitbull and Beagle\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 6
	else if (qnum == 6) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected B";
		else if (num == 4)
			cout << "The audience has selected C";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Angelina Jolie\n"
			<<"B. Kate Winslet\n"
			<<"C. Jennifer Aniston\n"
			<<"D. Scarlett Johansson\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 7
	else if (qnum == 7) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected C";
		else if (num == 4)
			cout << "The audience has selected D";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Country\n"
			<<"B. Rap\n"
			<<"C. Jazz\n"
			<<"D. Rock\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 8
	else if (qnum == 8) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected C";
		else if (num == 4)
			cout << "The audience has selected A";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Stretches\n"
			<<"B. Greets Someone\n"
			<<"C. Opens a Fridge,\n"
			<<"D. Looks at Time\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 9
	else if (qnum == 9) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected B";
		else if (num == 4)
			cout << "The audience has selected A";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Shrek\n"
			<<"B. Sherlock Holmes\n"
			<<"C. Mulan\n"
			<<"D. Elizabeth Bennett\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 10
	else if (qnum == 10) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected A";
		else if (num == 4)
			cout << "The audience has selected D";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Kimchi\n"
			<<"B. Chow Mein\n"
			<<"C. Bibimbap\n"
			<<"D. Sigpum\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 11
	else if (qnum == 11) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected D";
		else if (num == 4)
			cout << "The audience has selected B";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Alcoman\n"
			<<"B. Malcolm Z\n"
			<<"C. Malscorm\n"
			<<"D. Malcolm X\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 12
	else if (qnum == 12) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected C";
		else if (num == 4)
			cout << "The audience has selected B";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Steak\n"
			<<"B. Grouse\n"
			<<"C. Venison\n"
			<<"D. Red Meat\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 13
	else if (qnum == 13) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected A"; 
		else if (num == 4)
			cout << "The audience has selected C"; 

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. Nevada\n"
			<<"B. Colorado\n"
			<<"C. Texas\n"
			<<"D. Florida\n"
			 << "You may not use another for this question.\n\n";
	}
	//Question 14
	else if (qnum == 14) {
		if (num == 1 || num == 2 || num == 3)
			cout << "The audience has selected D";
		else if (num == 4)
			cout << "The audience has selected A";

		cout << "\n\nAlright, please select an answer...\n\n"
			<<"A. 5\n"
			<<"B. 100\n"
			<<"C. 10\n"
			<<"D. 3\n"
			 << "You may not use another for this question.\n\n";
	}
}

/* **********************
The function lifecall lets
the player use the call a 
friend lifeline. There is
a 50% chance of getting
the correct answer
********************** */
void lifecall(int qnum) 
{
	//create random number variable
	int num;
	//seed and generate random number
	srand(time(NULL));
	num = rand() % 4 + 1;

	//Question 1
	if (qnum == 1) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... A!"  << endl;	//gives right answer
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... B!"  << endl;	//gives wrong answer

		//gives options
		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Helium\nB. Hydrogen\nC. Oxygen\nD. Nitrogen\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}
	
	//Question 2
	if (qnum == 2) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... D!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. United States\nB. Afganistan\nC. Bikini Bottom\nD. Australia\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 3
	if (qnum == 3) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... A!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... C!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. United States\nB. Afganistan\nC. France\nD. Australia\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 4
	if (qnum == 4) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... A!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... B!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. 1967\nB. 1966\nC. 2000\nD. 2016\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 5
	if (qnum == 5) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... C!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Pitbull and Poodle\nB. Poodle and Pug\nC. Pug and Beagle\nD. Pitbull and Beagle\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 6
	if (qnum == 6) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... C!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Angelina Jolie\nB. Kate Winslet\nC. Jannifer Aniston\nD. Scarlet Johansson\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 7
	if (qnum == 7) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... C!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... D!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Country\nB. Rap\nC. Jazz\nD. Rock\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 8
	if (qnum == 8) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... C!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Stretches\nB. Greets Someone\nC. Opens A Fridge\nD. Looks At Time\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 9
	if (qnum == 9) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... D!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Shrek\nB. Sherlock Holmes\nC. Mulan\nD. Elizabeth Bennett\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 10
	if (qnum == 10) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... A!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... D!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Kimchi\nB. Chow Mein\nC. Bibimbap\nD. Sigpum\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 11
	if (qnum == 11) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... D!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Alcoman\nB. Malcolm Z\nC. Malscorm\nD. Malcolm X\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 12
	if (qnum == 12) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... B!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... c!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Steak\nB. Grouse\nC. Venison\nD. Red Meat\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 13
	if (qnum == 13) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... A!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... B!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. Nevada\nB. Colorado\nC. Texas\nD. Florida\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}

	//Question 14
	if (qnum == 14) {
		if (num == 1 || num == 2)
			cout << "Hmmmm, good question... I think it's... C!"  << endl;
		else if (num == 3 || num == 4) 
			cout << "Hmmmm, good question... I think it's... D!"  << endl;

		cout << "\n\nAlright, go ahead and select your answer...\n\nA. 5\nB. 100\nC. 10\nD. 3\n"
			 << "\n--Lifelines--\n"
			 << "You may not use another for this question.\n\n";
	}
}

/* **********************
The function lifehalf lets
the player use the
50/50 lifelines. It gets
rid of two of the answers,
leaving two there
*********************** */
void lifehalf(int qnum) 
{
	//Question 1
	if (qnum == 1) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "A. Helium\nB. Hydrogen\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 2
	if (qnum == 2) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Afganistan\nD. Australia\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 3
	if (qnum == 3) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "A. United States\nC. France\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 4
	if (qnum == 4) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "A. 1967\nB. 1966\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 5
	if (qnum == 5) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Poodle and Pug\nC. Pug and Beagle\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 6
	if (qnum == 6) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Kate Winslet\nC. Jennifer Aniston\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 7
	if (qnum == 7) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "C. Jazz\nD. Rock\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 8
	if (qnum == 8) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Greets Someone\nC. Opens a Fridge\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 9
	if (qnum == 9) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Sherlock Holmes\nD. Elizabeth Bennett\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 10
	if (qnum == 10) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "A. Kimchi\nD. Sigpum\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 11
	if (qnum == 11) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Malcolm Z\nD. Malcolm X\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 12
	if (qnum == 12) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "B. Grouse\nC. Venison\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 13
	if (qnum == 13) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "A. Nevada\nB. Colorado\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}

	//Question 14
	if (qnum == 14) {
		cout << endl << "Two options have been eliminated... \n \n"
					 << "C. 10\nD. 3\n"
					 << "\n--Lifelines--\n"
					 << "You may not use another for this question.\n";
	}
}

/* ********************
The function Choice lets
the user input their
choice for each question
******************** */
void million::Choice(char *name, int qnum, bool &fifty, bool &call, bool &ask, int &score, bool &right)
{
	//create loop variable
	bool loop = true;

	//this do loop ensures the questions is answered before continuing
	do {
		//this do loop check to make sure correct input is received
		do {
			//ask for the user's answer
			cout << endl << endl << "Please select an answer: ";

			//get input
			cin >> choice;
			cin.get();	//clear the input buffer

			//give feedback for invlid input
			if (!(choice == 'a' || choice == 'A' || choice == 'b' || choice == 'B' || choice == 'c' || choice == 'C' || choice == 'd' || choice == 'D'|| choice == 'e' || choice == 'E' || choice == 'f' || choice == 'F' || choice == 'g' || choice == 'G'))
				cout << endl << name << ", that's not an option!" << endl;
		} while (!(choice == 'a' || choice == 'A' || choice == 'b' || choice == 'B' || choice == 'c' || choice == 'C' || choice == 'd' || choice == 'D'|| choice == 'e' || choice == 'E' || choice == 'f' || choice == 'F' || choice == 'g' || choice == 'G'));

		//fifty-fifty lifeline
		if ((choice == 'e' || choice == 'E') && (fifty == true))
		{
			system("cls");	//clear screen
			fifty = false;	//set this lifeline to false

			//repeat status bar
			cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << endl << "  Question:"<< qnum << "    Money: $" << score << endl;
			cout << "***********************************************************************";
			
			//call the 'lifehalf' dialogue function
			lifehalf(qnum);

			//get input
			cin >> choice;
			cin.get();	//clear input buffer

			//don't loop
			loop = false;
		}
		//check to see if this lifeline was already used
		else if ((choice == 'e' || choice == 'E') && fifty == false)
			cout << "\nYou have already used your 'Fifty/Fifty'" << endl;

		//ask the audience lifeline
		if ((choice == 'f' || choice == 'F') && ask == true)
		{
			system("cls");	//clear screen
			ask = false;	//set this lifeline to false

			//repeat status bar
			cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << endl << "  Question:"<< qnum << "    Money: $" << score << endl;
			cout << "*****************************************************************";

			//call the 'ask' dialogue function
			lifeask(qnum);

			//get input
			cin >> choice;
			cin.get();	//clear input buffer

			//don't loop
			loop = false;
		}
		//check to see if this lifeline was already used
		else if ((choice == 'f' || choice == 'F') && ask == false)
			cout << "\nYou have already used your 'Ask The Audience'" << endl;

		//call a friend lifeline
		if ((choice == 'g' || choice == 'G') && call == true)
		{
			system("cls");	//clear screen
			call = false;	//set this lifeline to false

			//repeat status bar
			cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << endl << "  Question:"<< qnum << "    Money: $" << score << endl;
			cout << "*****************************************************************";

			//set up dialogue
			cout << "\n\nFriend: Hi there, " << name << "! You're on \nTV? Awesome! \n";
			//call the 'lifecall' dialogue function
			lifecall(qnum);

			//get input
			cin >> choice;
			cin.get();	//clear input buffer
			
			//don't loop
			loop = false;
		}
		//check to see if this lifeline was already used
		else if ((choice == 'g' || choice == 'G') && call == false)
			cout << "\nYou have already used your 'Call Home'" << endl;
		//check to see if no lifelines were used
		else if (!(choice == 'g' || choice == 'G') && !(choice == 'f' || choice == 'F') && !(choice == 'e' || choice == 'E'))
			//don't loop
			loop = false;
	} while (loop == true);
}

/* *************************
The function 'Result' gives
the result for the player's
options. 
************************* */
bool million::Result (char *name, int qnum, bool &fifty, bool &call, bool &ask, int &score, bool &right, bool &leave)
{
	//create selection variable
	int selection;

	//Question 1
	if (qnum == 1)
	{
		//if the player's choice is the correct answer
		if (choice == 'b' || choice == 'B')
		{
			right = true;	//player is correct
			score = 500;	//raise score
		}
	}
	//Question 2
	else if (qnum == 2)
	{
		if (choice == 'd' || choice == 'D')
		{
			right = true;
			score = 1000;
		}
	}
	//Question 3
	else if (qnum == 3)
	{
		if (choice == 'c' || choice == 'C')
		{
			right = true;
			score = 2000;
		}
	}
	//Question 4
	else if (qnum == 4)
	{
		if (choice == 'a' || choice == 'A')
		{
			right = true;
			score = 3000;
		}
	}
	//Question 5
	else if (qnum == 5)
	{
		if (choice == 'c' || choice == 'C')
		{
			right = true;
			score = 5000;
		}
	}
	//Question 6
	else if (qnum == 6)
	{
		if (choice == 'b' || choice == 'B')
		{
			right = true;
			score = 7000;
		}
	}
	//Question 7
	else if (qnum == 7)
	{
		if (choice == 'c' || choice == 'C')
		{
			right = true;
			score = 10000;
		}
	}
	//Question 8
	else if (qnum == 8)
	{
		if (choice == 'c' || choice == 'C')
		{
			right = true;
			score = 20000;
		}
	}
	//Question 9
	else if (qnum == 9)
	{
		if (choice == 'b' || choice == 'B')
		{
			right = true;
			score = 30000;
		}
	}
	//Question 10
	else if (qnum == 10)
	{
		if (choice == 'a' || choice == 'A')
		{
			right = true;
			score = 50000;
		}
	}
	//Question 11
	else if (qnum == 11)
	{
		if (choice == 'd' || choice == 'D')
		{
			right = true;
			score = 100000;
		}
	}
	//Question 12
	else if (qnum == 12)
	{
		if (choice == 'a' || choice == 'A')
		{
			right = true;
			score = 250000;
		}
	}
	//Question 13
	else if (qnum == 13)
	{
		if (choice == 'b' || choice == 'B')
		{
			right = true;
			score = 500000;
		}
	}
	//Question 14
	else if (qnum == 14)
	{
		if (choice == 'a' || choice == 'A')
		{
			right = true;
			score = 1000000;
		}
	}

	//repeat status bar
	cout << "Player: " << name << "  Lifelines-> 50/50: " << fifty << "  Ask Audience: " << ask << "  Call Friend:  " << call << endl << "  Question:"<< qnum << "    Money: $" << score << endl;
	cout << "*****************************************************************";
	
	//check to see if player got the last question right
	if ((right == true)&&(qnum == 14))
	{
		//leave the relative loop located in the main
		leave = true;
	}
	//check to see if player got a question right
	else if (right == true) {
		cout << endl << endl << "Correct!" << endl;
		
		//play correct answer sound
		PlaySoundW(L"correct.WAV", NULL, SND_FILENAME);

		//ask if user would like to walk away with money or not
		cout << "Would you like to walk away with " << score << "?" << endl << endl << endl
			 << "...or would you like to keep going for a chance at a million dollars?" << endl;

		//this do loop ensures correct input
		do {
			cout << "Take the money home: Enter '1' " << endl << "Keep going: Enter '2' " << endl;

			//get selection input
			cin >> selection;
			cin.get();	//clear intput buffer

			//if the player wants to leave
			if (selection == 1)
				leave = true;
			//if the player wants to continue
			else if (selection == 2)
				leave = false;
			//if the player did not enter a '1' or '2'
			else
				cout << "Please enter a valid number, " << name << "." << endl << endl;
		} while (selection != 1 && selection != 2);
	}
	//if not the correct answer, it is the wrong answer
	else {
		cout << endl << "Ohhh, sorry! That was incorrect." << endl;

		//play wrong answer sound
		PlaySoundW(L"wrong.WAV", NULL, SND_FILENAME);

		//leave relative loop located in the main
		leave = true;
	}

	//return whether or not we leave the loop in the main
	return leave;
}

/* ***********************
The function Win plays
when the player correctly
answers all 14 questions
*********************** */
bool million::Win(char *name, int qnum, int &score)
{
	//create selection variable
	int selection;

	//give feedback
	cout << "\n" << name << "... You are CORRECT!\nYOU HAVE WON ONE MILLION DOLLARS!";

	//play beating game music
	PlaySoundW(L"Win.WAV", NULL, SND_FILENAME);

	//ask user if they want to play again
	cout << "\n\nWould you like to play again?" << endl;
	cout << "Please enter '1' for yes, or '2' for no: ";
	
	//this do loop ensures correct input
	do {
		//get input
		cin >> selection;
		cin.get();	//clear input buffer

		//if player does not enter a 1 or 2
		if (selection != 1 && selection != 2)
			cout << endl << name << ", that's not an option!" << endl;
	} while (selection != 1 && selection != 2);
	
	//if player wants to play again
	if (selection == 1)
		return true;
	//if player wants to exit
	else
		return false;
}

/* *******************
The function Leaving 
tells the player what
money they earned when
leaving
******************* */
bool million::Leaving (char *name, int qnum, int &score) 
{
	//create selection variable
	int selection;

	//feedback
	cout << "\nSorry to see you go, " << name << "..." << endl;

	//safety net of $1000 below question 6
	if (qnum <= 6) {
		cout << "However, you did win $1000!" << endl << endl
			 << "Thanks for playing!" << endl;
	}
	//safety net of $5000 below question 11
	else if (qnum > 6 && qnum <= 11) {
		cout << "However, you did win $5000!" << endl << endl
			 << "Thanks for playing!" << endl;
	}
	//saftey net of $50,000 below question 14
	else if (qnum > 11 && qnum < 14) {
		cout << "However, you did win $50,000!" << endl << endl
			 << "Thanks for playing!" << endl;
	}

	//ask if user wants to play again
	cout << "\n\nWould you like to play again?" << endl;
	cout << "Please enter '1' for yes, or '2' for no: ";
	
	//this do loop ensures correct input
	do {
		//get input
		cin >> selection;
		cin.get();	//clear input buffer

		//if player does not enter a 1 or 2
		if (selection != 1 && selection != 2)
			cout << endl << name << ", that's not an option!" << endl;
	} while (selection != 1 && selection != 2);

	//if player wants to play again
	if (selection == 1)
		return true;
	//if player wants to exit
	else
		return false;
}

/* ***********************
The function player asks
and stores the player's
name
*********************** */
void player::read()
{
	qnum = 0;
	fifty = true;
	ask = true;
	call = true;
	score = 0;
	cout << "Hello! What is your name?(First name only)\n";
	cin >> first;
	while(cin.get()!='\n');
}
/* **************************
The function playintro calls
the Intro function using
pointers
************************** */
void player::playintro()
{
	millionptr[0].Intro(first,score);
}
/* **************************
The function question calls
the Question function using
pointers
************************** */
void player::question()
{
	++qnum;
	table();
	system("cls");
	millionptr[0].Question(first, qnum, score, fifty, call, ask);
}
/* **************************
The function choice calls
the Choice function using
pointers
************************** */
void player::choice()
{
	millionptr[0].Choice(first, qnum, fifty, call, ask, score, right);
}
/* **************************
The function result calls
the Result function using
pointers
************************** */
bool player::result()
{
	return millionptr[0].Result (first, qnum, fifty, call, ask, score, right, leave);
}
/* **************************
The function leaving calls
the Leaving function using
pointers
************************** */
bool player::leaving()
{
	return millionptr[0].Leaving(first, qnum, score);
}
/* **************************
The function win either call
the Win or Leaving function
depending if you win or not
************************** */
bool player::win()
{
	//if player wins game
	if (qnum == 14)
		return millionptr[0].Win(first, qnum, score);
	//if players loses game
	if (qnum < 14)
		return millionptr[0].Leaving(first, qnum, score);
	else 
		return false;
}
