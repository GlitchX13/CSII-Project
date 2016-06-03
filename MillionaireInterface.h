/* ***************************
The MillionaireInterface.h
contains the public and
private class variables and
functions as well as mainly 
the classes that store them
*************************** */
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>
using namespace std;
const int SIZEN = 100;
/* **********************************
Class Million includes all of the 
functions that output the the words 
and get the inputs
********************************** */
class million {
	public:
		million();
		~million();
		void Intro(char *name, int &score);
		void Question(char *name, int qnum, int &score,bool &fifty,bool &call,bool &ask);
		void Choice(char *name, int qnum, bool &fifty, bool &call, bool &ask, int &score, bool &right);
		bool Result(char *name, int qnum, bool &fifty, bool &call, bool &ask, int &score, bool &right, bool &leave);
		void Walk(char *name, int qnum, int score);
		bool Win(char *name, int qnum, int &score);
		bool Leaving (char *name, int qnum, int &score);

	private:
		int qnum;
		bool fifty, call, ask, right, leave;
		char choice;
};
/* *************************************
Class player calls the functions for the 
million class and includes a pointer to 
the million class
************************************* */
class player {
	public:
		player();
		~player();

		void read();
		void write();
		void playintro();
		void question();
		void choice();
		bool result();
		void walk();
		void table();
		bool win();
		bool leaving();
	private:
		int qnum, score;
		bool fifty, call, ask, right, leave;
		char *first;
		million *millionptr;
};


