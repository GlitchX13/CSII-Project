/* ***************************
Tyler French & Riley Green
4/13/16
Who Wants To Be A Millionaire
This program will ask questions
that follow a similar format
the actual game show.
*************************** */
#include "MillionaireInterface.h"
using namespace std;
int main() {
	//create variable for class functions
	player myPlayer;

	//add color to environment
	system("color 9f");
	system("cls");

	do {
		//Step 1: Get The Player's Name
		system("cls");
		myPlayer.read();

		//Step 2: Welcome The User
		system("cls");
		myPlayer.playintro();

		system("cls");
		do {
			//Step 3: Ask The Question
			myPlayer.question();

			//Step 4: Get User's Answer Selection
			myPlayer.choice();
			system("cls");
		} while (!myPlayer.result());	//Step 5: Continue Asking Questions 
	} while (myPlayer.win());	//Step 6: Player Wins

	//Step 7: Thank The User & Exit Program
	system("cls");
	cout << endl << endl << "Thanks for playing!";
	cin.get();
}
