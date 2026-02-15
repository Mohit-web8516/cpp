//Rock Paper Scissor Game
#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);

int main() {
    char player;
    char computer;
    char playAgain;

    do {
        player = getUserChoice();
        computer = getComputerChoice();

        cout << "Player choice: ";
        showChoice(player);
        cout << "Computer choice: ";
        showChoice(computer);

        showWinner(player, computer);

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
}

char getUserChoice() {
    char player;
    cout << "\nEnter your choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> player;
    return player;  // return the actual choice
}

char getComputerChoice() {
    srand(time(0));  // seed random generator
    int num = rand() % 3; // 0, 1, or 2
    switch (num) {
        case 0: return 'R';
        case 1: return 'P';
        case 2: return 'S';
    }
    return 'R'; // fallback
}

void showChoice(char choice) {
    switch (choice) {
        case 'R': cout << "Rock" << endl; break;
        case 'r': cout << "Rock" << endl; break;
        case 'P': cout << "Paper" << endl; break;
        case 'p': cout << "Paper" << endl; break;
        case 'S': cout << "Scissors" << endl; break;
        case 's': cout << "Scissors" << endl; break;
        default: cout << "Invalid choice" << endl;
    }
}

void showWinner(char player, char computer) {
    if (player == computer) {
        cout << "It's a tie!" << endl;
    } else if ((player == 'R' || player == 'r') && (computer == 'S' || computer == 's')) {
        cout << "You win!" << endl;
    } else if ((player == 'P' || player == 'p') && (computer == 'R' || computer == 'r')) {
        cout << "You win!" << endl;
    } else if ((player == 'S' || player == 's') && (computer == 'P' || computer == 'p')) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}
