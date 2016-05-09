# CSII-Project

#include <iostream>
#include "MillionaireInterface.h"
using namespace std;
/* ***************************
Tyler French & Riley Green
4/13/16
Who Wants To Be A Millionaire
This program will ask questions
that follow a similar format
the actual game show.
*************************** */
int main() {
	//Step 1: Declare Variables

	//Step 2: Introduce The User

	player myPlayer;
	myPlayer.read();
	system("cls");
	myPlayer.playintro();
	system("cls");
	do {
		myPlayer.question();
		myPlayer.choice();
		system("cls");
	} while (!myPlayer.result());
	myPlayer.leaving();

	//Step 3: ....
}
