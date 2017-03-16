#include "main.h"

constexpr int WORD_LENGTH = 4;

int main() {
	
	printIntro();
	
	playGame();
	return 0;
}

void playGame()
{
	bool play = true;
	do
	{
		for (int i = 0; i < WORD_LENGTH; i++) {
			printPlayerInput(requestFromPlayer());
		}
		play = continueGame();
	} while (play);

	cout << "See you next time!" << endl;
	
}

void printIntro() {
	cout << "Welcome to bulls and Cows game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram?" << endl;
}

string requestFromPlayer() {
	string playerInput = "";
	cout << "Please enter your character :" << endl;
	return getInput();
	
}

void printPlayerInput(string input) {
	cout << "Your input is \"" << input << "\"" << endl;
}

string getInput() {
	string result = "";
	getline(cin, result);
	return result;
}

bool continueGame() {
	cout << "Please press \"Y\" to continue play, \"N\" to abort game" << endl;
	string answr = getInput();
	while (!(answr[0] == 'Y' || answr[0] == 'y' || answr[0] == 'N' || answr[0] == 'n')) {
		cout << "Incorrect character. Please press \"Y\" to continue play, \"N\" to abort game" << endl;
		answr = getInput();
	}
	

	return answr[0] == 'Y' || answr[0] == 'y';
}
