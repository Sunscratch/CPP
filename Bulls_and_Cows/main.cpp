#include "main.h"

constexpr int WORD_LENGTH = 4;

int main() {
	
	printIntro();
	
	playGame();
	return 0;
}

void playGame()
{
	for (int i = 0; i < WORD_LENGTH; i++) {
		printPlayerInput(requestFromPlayer());
	}
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
