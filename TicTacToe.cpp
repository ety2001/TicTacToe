// Imports
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int main(){
	char board [3][3];
	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = '';
	        }
	}								        
	char (*gameboard)[3] = board;
	char playerturn = 'X';
	
	cout << "What is your move Player " << playerturn << endl;

}

void printboard(char(*gameboard)[3]) {
	cout << "\ta\tb\tc\n"; 
	for(int i = 0; i < 3; i++){
		cout << i;
		for(int j = 0; j < 3; j++){
			cout << [i][j]; 
		}
		cout << endl;
	}
}
