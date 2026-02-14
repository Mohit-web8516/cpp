// //type conversion = converting one data type to another
// //implicit type conversion == automatic and explicit type conversion == manual

// #include<iostream>
// using namespace std;
// int main(){
//     int num1 = 10;
//     double num2 = 3.14;

//     // Implicit type conversion (num1 is converted to double)
//     double result1 = num1 + num2; 
//     cout << "Result of implicit conversion: " << result1 << endl;

//     // Explicit type conversion (casting num2 to int)
//     int result2 = num1 + (int)num2; 
//     cout << "Result of explicit conversion: " << result2 << endl;
// }


///////////+++++++++++++++++++++++///////////////
///////////+++++++++++++++++++++++///////////////
///////////+++++++++++++++++++++++///////////////
///////////+++++++++++++++++++++++///////////////
///////////+++++++++++++++++++++++///////////////
// #include <iostream>
// using namespace std;
// int main(){
//     double x = (int)3.14;
//     char y = 100; //ASCII VALUE OF D
//     cout << x << endl;
//     cout << y ;

//     return 0;
// }



/////////////////////////////////
#include <iostream>
using namespace std;
int main (){
    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;
    cout << "Your score is: " << score << "%" << endl;
}