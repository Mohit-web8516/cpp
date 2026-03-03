// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<=i; j++) cout << char('A' + j) << " ";
//         cout << endl;
//     }
// }
///////////////////////////////
/*A 
A B 
A B C 
A B C D 
A B C D E */



//////////////////////////////////
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i=n; i>=1; i--) {
//         for(int j=0; j<i; j++) cout << char('A' + j) << " ";
//         cout << endl;
//     }
// }
//////////////OUTPUT//////
/*

A B C D E 
A B C D 
A B C 
A B 
A 
*/


/////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     char ch = 'A';
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) cout << ch++ << " ";
//         cout << endl;
//     }
// }
///////////////////////////////////
/*

A 
B C 
D E F 
G H I J 
K L M N O 
*/
//////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<=i; j++) cout << char('A' + j);
//         for(int j=i-1; j>=0; j--) cout << char('A' + j);
//         cout << endl;
//     }
// }
/////////////////////////////////
/*
A
ABA
ABCBA
ABCDCBA
*/