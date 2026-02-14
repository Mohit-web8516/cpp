#include <iostream>
#include <cmath>
using namespace std;
int main(){
    char op;
    double num1, num2 , result;
    cout << "*************CALCULATOR PROGRAM **************" << endl;
    cout << "Enter an operator (+, -, *, /) : ";
    cin >> op;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;
    switch (op){
        case '+':
            result = num1 + num2;
            cout << "Result : " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result : " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result : " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "Result : " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}