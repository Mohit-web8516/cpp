//Ternanry Operator = ? :
//Condition ? Expression1 : Expression2
//If condition is true, Expression1 is evaluated and becomes the result.
//If condition is false, Expression2 is evaluated and becomes the result.




// #include <iostream>
// using namespace std;
// int main(){
//     int grade;
//     cout << "Enter your grade: ";
//     cin >> grade;
//     grade >= 60 ? cout << "You passed!" : cout << "You failed!";
//     return 0;
// }


////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main(){
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     int max = (num1 > num2) ? num1 : num2;
//     cout << "The maximum number is: " << max;
//     return 0;
// }
/////////////////////////////////////

#include <iostream>
using namespace std;
int main(){
    bool isRaining;
    cout << "Is it raining? (1 for yes, 0 for no): ";
    cin >> isRaining;
    string message = isRaining ? "Don't forget your umbrella!" : "Enjoy the sunshine!";
    cout << message;
    return 0;
}