#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
constexpr int WORD_LENGTH = 9;

void printIntro();
void requestFromPlayer();
string getInput();


int main() {
	
	printIntro();
	requestFromPlayer();
	
	return 0;

}

void printIntro() {
	cout << "Welcome to bulls and Cows game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram?" << endl;
}

void requestFromPlayer() {
	string playerInput = "";
	cout << "Please enter your character :" << endl;
	playerInput = getInput();
	cout << "Your input is \"" << playerInput << "\"" << endl;
}

string getInput() {
	string result = "";
	getline(cin, result);
	return result;
}