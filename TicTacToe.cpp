/*
Play a game of TicTacToe!
Elaine Yang 10/5
*/

// Imports
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

// Methods
bool checkwin(char player, char(*gameboard)[3]);
bool checktie(char(*gameboard)[3]);
void printboard(char(*gameboard)[3]);
bool play = true;

int main(){
	// Creates the board
	char board[3][3];
	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = ' ';
	        }
	}								        
	char (*gameboard)[3] = board;
	char playerturn = 'X';
	char move [2];
	char playinput;
	int xwins = 0;
	int owins = 0;

	// Makes sure player wants to play
	while (play == true) {
		// Makes sure the game is not over
		while (checkwin('X', gameboard) == false && checkwin('O', gameboard) == false && checktie(gameboard) == false){
			// Print board and read the move
			printboard(gameboard);
			cout << "What is your move Player " << playerturn << "? Please provide row and column in the form a1 for example" << endl;
			cin >> move;
			
			// Checks for valid row
			if(move[0] != 'a' && move[0] != 'b' && move[0] != 'c'){
				cout << "Please enter a valid move, Row must be a, b, or c" << endl;
			}
			// Checks for valid column
			else if(move[1] != '1' && move[1] != '2' && move[1] != '3'){
				cout << "Please enter a valid move, Column must be 1, 2, or 3" << endl;
			}
			// Checks if specified move is available and moves
			else {
				int row = move[0] - 'a';
				int col = move[1] - '1';
				if(gameboard[row][col] == ' '){
					gameboard[row][col] = playerturn;
					if (playerturn == 'X'){
						playerturn = 'O';
					}
					else {
						playerturn = 'X';
					}
				}
				else{
					cout << "Plase enter an available space" << endl;
				}
			}
			// Checks if X wins
			if(checkwin('X', gameboard) == true){
				printboard(gameboard);
				cout << "Player X wins!" << endl;
				xwins++;
				cout << "Number of X wins:" << xwins << " Number of O wins:" << owins << endl;
			}
			// Checks if O wins
			else if(checkwin('O', gameboard) == true){
				printboard(gameboard);
				cout << "Player O wins!" << endl;
				owins++;
				cout << "Number of X wins:" << xwins << " Number of O wins:" << owins << endl;
			}
			// Checks if tie
			else if(checktie(gameboard) == true){
				printboard(gameboard);
				cout << "It is a tie!" << endl;
				cout << "Number of X wins:" << xwins << " Number of O wins:" << owins << endl;
			}
		}

		// Checks if player still wants to play
		cout << "Play again? Enter Y or N" << endl;
		cin >> playinput;
		if(playinput == 'Y'){
			playerturn = 'X';
			for (int i = 0; i < 3; i++){
		                for(int j = 0; j < 3; j++){
		                        board[i][j] = ' ';
		                }
		        }
		}
		else{
			play = false;
		}
	}
}

// Method to print board
void printboard(char(*gameboard)[3]) {
	cout << "\t1\t2\t3\n";
	cout << 'a';
	for(int j = 0; j < 3; j++){
		cout << "\t" << gameboard[0][j];
	}
	cout << endl << 'b';
	for(int j = 0; j < 3; j++){
                cout << "\t" << gameboard[1][j];
        }
	cout << endl << 'c';
	for(int j = 0; j < 3; j++){
                cout << "\t" << gameboard[2][j];
        }
	cout << endl;
	
}

// Method to check 3 in a row
bool checkwin(char player, char(*gameboard)[3]) {
	if(gameboard[0][0] == player &&
		gameboard[1][0] == player &&
		gameboard[2][0] == player) {
		return true;
	}
	if(gameboard[0][1] == player &&
                gameboard[1][1] == player &&
                gameboard[2][1] == player) {
		return true;
	}
	if(gameboard[0][2] == player &&
                gameboard[1][2] == player &&
                gameboard[2][2] == player) {
                return true;
        }
	if(gameboard[0][0] == player &&
                gameboard[0][1] == player &&
                gameboard[0][2] == player) {
                return true;
        }
	if(gameboard[1][0] == player &&
                gameboard[1][1] == player &&
                gameboard[1][2] == player) {
                return true;
        }
	if(gameboard[2][0] == player &&
                gameboard[2][1] == player &&
                gameboard[2][2] == player) {
                return true;
        }
	if(gameboard[0][0] == player &&
                gameboard[1][1] == player &&
                gameboard[2][2] == player) {
                return true;
        }
        if(gameboard[0][2] == player &&
                gameboard[1][1] == player &&
                gameboard[2][0] == player) {
                return true;
        }
	return false;
}

// Method to check tie
bool checktie(char(*gameboard)[3]) {
	for (int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                        if(gameboard[i][j] == ' '){
				return false;
			}
                }
        }
	return true;
}
