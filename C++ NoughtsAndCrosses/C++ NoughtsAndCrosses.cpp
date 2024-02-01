// C++ NoughtsAndCrosses.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

string getSymbols(string playerName) {
	bool valid = false;
	string symbol = "";
	while (valid == false) {
		cout << playerName << ", please enter a single character symbol for the game: ";
		cin >> symbol;
		if (symbol.length() > 1) {
			cout << "Sorry, that symbol was too long! Please try again: \n";
		}
		else {
			cout << symbol << " selected as " << playerName << "'s symbol.\n";
			valid = true;
		}
		return symbol;
	}
}

string getNames() {
	string tempName = "";
	cout << "Please enter your name: ";
	cin >> tempName;
	return tempName;
}
int main() {
	string gameBoard[3][3] = {
		{"-", "-", "-"},
		{"-", "-", "-"},
		{"-", "-", "-"}
	};
	string playerOne = getNames();
	string playerTwo = getNames();
	string symbolOne = getSymbols(playerOne);
	string symbolTwo = getSymbols(playerTwo);
	return 0;
}