// Imports
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

bool checkwin(char player, char(*gameboard)[3]);
void printboard(char(*gameboard)[3]);
bool play = true;

int main(){
	char board [3][3];
	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = ' ';
	        }
	}								        
	char (*gameboard)[3] = board;
	char playerturn = 'X';
	char move [2];
	while (play == true) {
		printboard(gameboard);
		cout << "What is your move Player " << playerturn << "? Please provide row and column in the form a1 for example" << endl;
		cin >> move;
		int row = move[0] - 'a';
		int col = move[1] - '1';
		if(gameboard[row][col] == ' '){
			gameboard[row][col] = playerturn;
		}
		else{
			cout << "Plase enter an available move"
		}
	}
}

void printboard(char(*gameboard)[3]) {
	cout << "\ta\tb\tc\n"; 
	for(int i = 0; i < 3; i++){
		cout << i;
		for(int j = 0; j < 3; j++){
			cout << "\t" << gameboard[i][j]; 
		}
		cout << endl;
	}
}

bool checkwin(char player, char(*gameboard)[3]) {
	//bool playerwin = false;
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
}

bool checktie(char(*gameboard)[3]) {
	
}
