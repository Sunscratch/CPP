#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
constexpr int WORD_LENGTH = 9;

void printIntro();
string requestFromPlayer();
void printPlayerInput(string input);
string getInput();


int main() {
	
	printIntro();
	printPlayerInput(requestFromPlayer());
	
	return 0;

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
