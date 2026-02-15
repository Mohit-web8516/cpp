// Number Guessing Game
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;
int main(){
    srand(time(0));
    int randNum = (rand() % 100) + 1; // generates a random number between 1 and 100
    int guess;
    cout << "WELCOME TO THE NUMBER GUESSING GAME!" << endl;
    do {
        cout << "GUESS A NUMBER BETWEEN 1 AND 100 :";
        cin >> guess;
        if (guess > randNum){
            cout << "TOO HIGH! TRY AGAIN." << endl;
        }
        else if (guess < randNum){
            cout << "TOO LOW! TRY AGAIN." << endl;
        }
        else {
            cout << "CONGRATS! YOU GUESSED THE NUMBER!" << endl;

        }
    
} while (guess != randNum);
cout << "THE NUMBER WAS : " << randNum << endl;
                  return 0;
}