#include <iostream>
using namespace std;

int main() {
    string questions[] = {
        "1. What year was C++ created?",
        "2. Who invented C++?",
        "3. What is the predecessor of C++?",
        "4. Is the Earth flat?"
    };

    string options[][4] = {
        {"1) 1979", "2) 1985", "3) 1990", "4) 2000"},
        {"1) Dennis Ritchie", "2) James Gosling", "3) Bjarne Stroustrup", "4) Guido van Rossum"},
        {"1) Java", "2) C", "3) Python", "4) Pascal"},
        {"1) Yes", "2) No", "3) Sometimes", "4) Not sure"}
    };

    int correctAnswers[] = {2, 3, 2, 2}; // correct option numbers
    int score = 0;
    int userChoice;

    cout << "=== Welcome to the C++ Quiz Game ===\n\n";

    for (int i = 0; i < 4; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Enter your choice (1-4): ";
        cin >> userChoice;

        if (userChoice == correctAnswers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! The correct answer was: " 
                 << options[i][correctAnswers[i]-1] << "\n\n";
        }
    }

    cout << "=== Quiz Finished! ===\n";
    cout << "Your final score is " << score << " out of 4.\n";

    return 0;
}
