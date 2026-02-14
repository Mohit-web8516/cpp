//logical operator = =, !=, >, <, >=, <=
//logical operator is used to compare two values and return a boolean value (true or false)


#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    bool isEqual = (num1 == num2);
    bool isNotEqual = (num1 != num2);
    bool isGreater = (num1 > num2);
    bool isLess = (num1 < num2);
    bool isGreaterOrEqual = (num1 >= num2);
    bool isLessOrEqual = (num1 <= num2);
    
    cout << "Is " << num1 << " equal to " << num2 << "? " << isEqual << endl;
    cout << "Is " << num1 << " not equal to " << num2 << "? " << isNotEqual << endl;
    cout << "Is " << num1 << " greater than " << num2 << "? " << isGreater << endl;
    cout << "Is " << num1 << " less than " << num2 << "? " << isLess << endl;
    cout << "Is " << num1 << " greater than or equal to " << num2 << "? " << isGreaterOrEqual << endl;
    cout << "Is " << num1 << " less than or equal to " << num2 << "? " << isLessOrEqual << endl;

    return 0;
}