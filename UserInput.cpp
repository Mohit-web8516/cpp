// #include <iostream>
// using namespace std;
// int main (){
//     int age;
//     cout << "Enter your age : "; // cout << (insertion operator)
//     cin >> age ; //cin >> (extraction operator)
//     cout << "Your age is : " << age ;
//     return 0;
// }

////////////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main (){
//     string name;
//     string surname;
//     cout << "Enter your name : ";
//     cin >> name;
//     cout << "Enter your surname : ";
//     cin >> surname;

//     cout << "My name is :" << name + " " + surname;
//     return 0 ;


// }
////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main (){
//     string name;
//     int age;
//     cout << "Enter your name : ";
//     getline(cin, name); //to take input with spaces
//     cout << "Enter your age : ";
//     cin >> age;

//     cout << "My name is :" << name <<  '\n' << "and my age is " << age;
//     return 0 ;
// }

///////////////////////////////////
////Useful maths functions

#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double num1 = 3;
    double num2 = 2.71;

    cout  << ceil(num1) << endl; // rounds up

    cout <<  floor(num1) << endl; // rounds down
    cout << round(num1) << endl; //rounds to nearest integer

    cout <<  max(num1, num2) << endl; 

    cout << min(num1, num2) << endl;

    cout << pow(num1, 3) << endl;


    cout << sqrt(num2) << endl;

    cout <<abs(num1) << endl;

    cout << sqrt(num1) << endl;
    return 0;

}