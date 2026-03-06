//For loops
// #include <iostream>
// using namespace std;

// int main (){
//     for (int i = 1; i<= 5;i++){
//         cout << i << " ";
//     }
//     return 0;
// }

/////////////////////
// #include <iostream>
// using namespace std;

// int main(){
//     int i,sum = 0;
//     for (int i = 1; i <= 5 ; i++){
//         cout << i << " ";
//         sum = sum + i ;
//         cout << sum << endl;
//     }
// }


//output
/*
1 1
2 3
3 6
4 10
5 15

*/

/////////////////////////////////////////
//Print multiplication table of 7
// #include <iostream>
// using namespace std;
// int main (){
//   for(int i = 1;i <= 10; i++){
//     cout << "7 X " << i << " = " << i * 7<< endl;

//    }

// }

////////////////////////////////////
//program to find even number till n..
// #include <iostream>
// using namespace std;
// int main (){
//     int i,n;
//     cout << "Enter your number : " ;
//     cin >> n;
//     for (int i = 1 ; i <= n ; i++){
//         if (i % 2 == 0){
//             cout << i << endl;
//         }
//     }
// }



////////////////////////////////////
//Reverse counting from 10 to 1

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i = 10 ; i >= 1 ; i--)
//     cout << i << endl;
// }




/////////////////////////////////
/////////////////////////////////
/////////////////////////////////
/////////////////////////////////

//WHILE LOOP
// Print numbers 1 to 5
// #include <iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     while(i <= 5) {
//         cout << i << " ";
//         i++;
//     }
//     return 0;
// }

///////////////////////////////
//PRINT ODD NUMBERS UP TO 15
// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     while (i <= 15){
//         if (i % 2 != 0){
//             cout << i << endl;
//         }
//         i++; //always increment
//     }
// }


///Sum of digits of a number

// #include <iostream>
// using namespace std;
// int main(){
//     int n , sum = 0;
//     cout << "Enter your number : ";
//     cin >> n;

//     while (n > 0){
//         int digit = n % 10;
//         sum = sum + digit;
//         n = n / 10;
//     }
//     cout << "Sum of digit = " << sum;
//     return 0;
// }



////////////////////////////////////
//Check if a number is prime
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    bool isPrime = true;   // assume prime
    int i = 2;

    if (n <= 1) {
        isPrime = false;   // 0 and 1 are not prime
    } else {
        while (i <= n / 2) {   // check divisors up to n/2
            if (n % i == 0) {
                isPrime = false;
                break;         // found a divisor, exit loop
            }
            i++;
        }
    }

    if (isPrime)
        cout << n << " is prime";
    else
        cout << n << " is not prime";

    return 0;
}
