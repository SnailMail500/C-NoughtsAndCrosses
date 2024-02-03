// C++ NoughtsAndCrosses.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

bool winCheck(string board[6][6], string symbol, string name) {
	cout << "Temporary statement\n";
	return false;
}

void drawBoard(string board[6][6]) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
}

void placeSymbol(string name, string symbol, string board[6][6]) {
	bool valid = false;
	bool empty = false;
	int x = 0, y = 0;
	while (empty == false) {
		while (valid == false) {
			drawBoard(board);
			cout << name << ", please enter the coordinates of the space you wish to take; \n";
			cout << "Please enter the X-coordinate: \n";
			cin >> x;
			if (x < 1 or x > 3) {
				cout << "Sorry, that value wasn't within the required range. Please try again with a number between 1 and 3 inclusive\n";
			}
			else {
				valid = true;
			}
		}
		valid = false;
		while (valid == false) {
			cout << "Please enter the Y-coordinate: \n";
			cin >> y;
			if (y < 1 or y > 3) {
				cout << "Sorry, that value wasn't within the required range. Please try again with a number between 1 and 3 inclusive\n";
			}
			else {
				valid = true;
			}
		}
		if (board[x * 2][x * 2] == "-") {//this will not work as the coords arent right- BRANCH TO MAKE NEW SUB
			board[x * 2][y * 2] = symbol;
			empty = true;
		}
		else {
			empty = false;
		}
	}
}

void playGame(string nameOne, string nameTwo, string symbolOne, string symbolTwo, string gameBoard[6][6]) {
	int turnNum = 1;
	bool gameWon = false;
	while (gameWon == false) {
		if (turnNum == 9) {
			gameWon = true;
		}
		else if (winCheck(gameBoard, symbolOne, nameOne) == true) {
			cout << "Temporary output for testing\n";
		}
		else if
	}
}

string getSymbols(string playerName) {
	bool valid = false;
	string symbol = "";
	while (valid == false) {
		cout << playerName << ", please enter a single character symbol for the game: \n";
		cin >> symbol;
		if (symbol.length() > 1) {
			cout << "Sorry, that symbol was too long! Please try again: \n";
		}
		else {
			cout << symbol << " selected as " << playerName << "'s symbol.\n";
			valid = true;
		}
	}
	return symbol;
}

string getNames() {
	string tempName = "";
	cout << "Please enter your name: \n";
	cin >> tempName;
	return tempName;
}
int main() {
	string gameBoard[6][6] = {
		{" ", "1", "|", "2", "|", "3"},
		{"1", " ", "|", " ", "|", " "},
		{" ", "-", "+", "-", "+", "-"},
		{"2", " ", "|", " ", "|", " "},
		{" ", "-", "+", "-", "+", "-"},
		{"3", " ", "|", " ", "|", " "}
	};
	drawBoard(gameBoard);
	string playerOne = getNames();
	string playerTwo = getNames();
	string symbolOne = getSymbols(playerOne);
	string symbolTwo = getSymbols(playerTwo);
	playGame(playerOne, playerTwo, symbolOne, symbolTwo, gameBoard);
	return 0;
}