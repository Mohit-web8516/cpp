#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool playerWinner(char *spaces, char player);
bool computerWinner(char *spaces, char computer);
bool checkTie(char *spaces);

int main (){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    cout << "Welcome to Tic-Tac-Toe!\n";
    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (playerWinner(spaces, player)) {
            cout << "You win!\n";
            break;
        }
        if (checkTie(spaces)) {
            cout << "It's a tie!\n";
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);

        if (computerWinner(spaces, computer)) {
            cout << "Computer wins!\n";
            break;
        }
        if (checkTie(spaces)) {
            cout << "It's a tie!\n";
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces){
    cout << "     |     |     \n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n";
    cout << "-----|-----|-----\n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n";
    cout << "-----|-----|-----\n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n";
    cout << "     |     |     \n";
}

void playerMove(char *spaces, char player){
    int number;
    while (true) {
        cout << "Enter a position (1-9): ";
        cin >> number;
        number--; // adjust for array index
        if (number < 0 || number > 8 || spaces[number] != ' ') {
            cout << "Invalid move! Try again.\n";
        } else {
            spaces[number] = player;
            break;
        }
    }
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));
    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            cout << "Computer chose position " << number+1 << "\n";
            break;
        }
    }
}

bool playerWinner(char *spaces, char player){
    return ((spaces[0]==player && spaces[1]==player && spaces[2]==player) ||
            (spaces[3]==player && spaces[4]==player && spaces[5]==player) ||
            (spaces[6]==player && spaces[7]==player && spaces[8]==player) ||
            (spaces[0]==player && spaces[3]==player && spaces[6]==player) ||
            (spaces[1]==player && spaces[4]==player && spaces[7]==player) ||
            (spaces[2]==player && spaces[5]==player && spaces[8]==player) ||
            (spaces[0]==player && spaces[4]==player && spaces[8]==player) ||
            (spaces[2]==player && spaces[4]==player && spaces[6]==player));
}

bool computerWinner(char *spaces, char computer){
    return ((spaces[0]==computer && spaces[1]==computer && spaces[2]==computer) ||
            (spaces[3]==computer && spaces[4]==computer && spaces[5]==computer) ||
            (spaces[6]==computer && spaces[7]==computer && spaces[8]==computer) ||
            (spaces[0]==computer && spaces[3]==computer && spaces[6]==computer) ||
            (spaces[1]==computer && spaces[4]==computer && spaces[7]==computer) ||
            (spaces[2]==computer && spaces[5]==computer && spaces[8]==computer) ||
            (spaces[0]==computer && spaces[4]==computer && spaces[8]==computer) ||
            (spaces[2]==computer && spaces[4]==computer && spaces[6]==computer));
}

bool checkTie(char *spaces){
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') return false;
    }
    return true;
}
