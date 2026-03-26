#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Account {
    int accNo;
    char name[50];
    float balance;

public:
    void createAccount() {
        cout << "\nEnter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void display() const {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    int getAccNo() const {
        return accNo;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount > balance)
            cout << "\nInsufficient Balance!\n";
        else
            balance -= amount;
    }
};

// 🔹 Add Account
void writeAccount() {
    Account acc;
    ofstream outFile("account.dat", ios::binary | ios::app);

    acc.createAccount();
    outFile.write(reinterpret_cast<char*>(&acc), sizeof(acc));

    outFile.close();
    cout << "\nAccount Created Successfully!\n";
}

// 🔹 Display All
void displayAll() {
    Account acc;
    ifstream inFile("account.dat", ios::binary);

    if (!inFile) {
        cout << "\nFile not found!\n";
        return;
    }

    while (inFile.read(reinterpret_cast<char*>(&acc), sizeof(acc))) {
        acc.display();
    }

    inFile.close();
}

// 🔹 Search Account
void searchAccount(int accNo) {
    Account acc;
    ifstream inFile("account.dat", ios::binary);

    bool found = false;

    while (inFile.read(reinterpret_cast<char*>(&acc), sizeof(acc))) {
        if (acc.getAccNo() == accNo) {
            acc.display();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nAccount not found!\n";

    inFile.close();
}

// 🔹 Deposit / Withdraw
void modifyAccount(int accNo, int type) {
    Account acc;
    fstream file("account.dat", ios::binary | ios::in | ios::out);

    bool found = false;

    while (file.read(reinterpret_cast<char*>(&acc), sizeof(acc))) {
        if (acc.getAccNo() == accNo) {
            float amount;
            cout << "\nEnter amount: ";
            cin >> amount;

            if (type == 1)
                acc.deposit(amount);
            else
                acc.withdraw(amount);

            int pos = -1 * sizeof(acc);
            file.seekp(pos, ios::cur);
            file.write(reinterpret_cast<char*>(&acc), sizeof(acc));

            cout << "\nTransaction Successful!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nAccount not found!\n";

    file.close();
}

// 🔹 MAIN MENU
int main() {
    int choice, accNo;

    do {
        cout << "\n\n===== BANK MANAGEMENT SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Display All Accounts";
        cout << "\n3. Search Account";
        cout << "\n4. Deposit";
        cout << "\n5. Withdraw";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeAccount();
                break;

            case 2:
                displayAll();
                break;

            case 3:
                cout << "Enter Account Number: ";
                cin >> accNo;
                searchAccount(accNo);
                break;

            case 4:
                cout << "Enter Account Number: ";
                cin >> accNo;
                modifyAccount(accNo, 1);
                break;

            case 5:
                cout << "Enter Account Number: ";
                cin >> accNo;
                modifyAccount(accNo, 2);
                break;

            case 6:
                cout << "\nExiting...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}