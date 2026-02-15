//Banking Practice Program.
#include <iostream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

    cout << "Welcome to the Banking Practice Program!" << endl;

    do {
        cout << "\nPlease select an option:" << endl;
        cout << "-----------------------------" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "Thank you for using the Banking Practice Program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your balance is: $" << balance << endl;
}

double deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount < 0) {
        cout << "Invalid deposit amount." << endl;
        return 0;
    }
    return amount;
}

double withdraw(double balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient funds." << endl;
        return 0;
    } else if (amount < 0) {
        cout << "Invalid withdrawal amount." << endl;
        return 0;
    }
    return amount;
   cout << "Withdrawal successful." << endl;
}

