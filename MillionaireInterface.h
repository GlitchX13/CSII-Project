#include <iostream>
#include <stdlib.h>
using namespace std;
/* ***************************
*************************** */
const int SIZEN = 100;
class million {
	public:
		million();
		~million();
		void Intro(char *name, int &score);
		void Question(char *name, int qnum, int &score);
		void Choice(char *name, int qnum, bool fifty, bool call, bool ask, int &score, bool &right);
		bool Result(char *name, int qnum, bool fifty, bool call, bool ask, int &score, bool &right, bool &leave);
		void Walk(char *name, int qnum, int score);
		void Leaving (char *name, int qnum, int &score);

	private:
		int qnum;
		bool fifty, call, ask, right, leave;
		char choice;
};
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
		void leaving();
	private:
		int qnum, score;
		bool fifty, call, ask, right, leave;
		char *first;
		million *millionptr;
};