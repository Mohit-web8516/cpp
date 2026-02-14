//if statement is used to execute a block of code if a specified condition is true.
// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout << "Enter your age : ";
//     cin >> age;
//     if(age >= 18){
//         cout << "You are eligible to drive."<< endl;  
//     }
//     else{
//         cout << "You are not eligible to drive."<< endl;
//     }
// }

//////////////////////////////
//else if statement is used to specify a new condition to test, if the first condition is false.

#include <iostream>
using namespace std;
int main (){
    int a;
    int b;
    int c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    if(a > b && a > c){
        cout << "The largest number is : " << a << endl;
    }
    else if(b > a && b > c){
        cout << "The largest number is : " << b << endl;
    }
    else{
        cout << "The largest number is : " << c << endl;
    }
}