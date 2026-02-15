//Nested-loop = A nested loop is a loop that is contained within another loop. The inner loop is executed for each iteration of the outer loop. Nested loops are commonly used to iterate through multi-dimensional arrays or to perform complex iterations.


// #include <iostream>
// using namespace std;
// int main (){
//     for (int i = 1; i <= 3; i++){
//         for (int j = 1; j <= 10; j++){
//             cout << j << " " ;
//         }
//         cout << endl;
//     }
// }

////////////////////
//pattern printing using nested loop
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 5; i++){
//         for (int j = 1; j <= i; j++){
//             cout << "* " ;
//         }
//         cout << endl;
//     }
// }





/////////////////////
// #include <iostream>
// using namespace std;
// int main(){
//     int rows;
//     int columns;
//     char symbol;
//     cout << "ENTER THE NUMBER OF ROWS :";
//     cin >> rows;
//     cout << "ENTER THE NUMBER OF COLUMNS :";
//     cin >> columns;
//     cout << "THE PATTERN IS :" ;
//     cin >> symbol;
//     for (int i = 1; i <= rows; i++){
//         for (int j = 1; j <= columns; j++){
//             cout << symbol << " ";
//         }
//         cout << endl;
//     }
// }