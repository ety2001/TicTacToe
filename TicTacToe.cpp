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
int main(){
	char board [3][3];
	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = ' ';
	        }
	}								        
	char (*gameboard)[3] = board;
	char playerturn = 'X';
	
	cout << "What is your move Player " << playerturn << endl;
	printboard(gameboard);

}

void printboard(char(*gameboard)[3]) {
	cout << "\ta\tb\tc\n"; 
	for(int i = 0; i < 3; i++){
		cout << i;
		for(int j = 0; j < 3; j++){
			cout << gameboard[i][j]; 
		}
		cout << endl;
	}
}

bool checkwin(char player, char(*gameboard)[3]) {
	bool playerwin = false;
	if(gameboard[0][0] == player &&
		gameboard[1][0] == player &&
		gameboard[2][0] == player) {
		playerwin = true;
	}
	if(gameboard[0][1] == player &&
                gameboard[1][1] == player &&
                gameboard[2][1] == player) {
		playerwin = true;
	}
	if(gameboard[0][2] == player &&
                gameboard[1][2] == player &&
                gameboard[2][2] == player) {
                playerwin = true;
        }
	if(gameboard[0][0] == player &&
                gameboard[0][1] == player &&
                gameboard[0][2] == player) {
                playerwin = true;
        }
	if(gameboard[1][0] == player &&
                gameboard[1][1] == player &&
                gameboard[1][2] == player) {
                playerwin = true;
        }
	if(gameboard[2][0] == player &&
                gameboard[2][1] == player &&
                gameboard[2][2] == player) {
                playerwin = true;
        }
	if(gameboard[0][0] == player &&
                gameboard[1][1] == player &&
                gameboard[2][2] == player) {
                playerwin = true;
        }
        if(gameboard[0][2] == player &&
                gameboard[1][1] == player &&
                gameboard[2][0] == player) {
                playerwin = true;
        }
}

