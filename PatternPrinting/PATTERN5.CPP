//Palindromic Number Pyramid
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) cout << "  ";
//         for(int j=i; j>=1; j--) cout << j << " ";
//         for(int j=2; j<=i; j++) cout << j << " ";
//         cout << endl;
//     }
// }
////////////////////////////////
/*
      1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 
*/


///////////////////////////
//ALPHABET HOURGLASS
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i=n; i>=1; i--) {
//         for(int j=0; j<i; j++) cout << char('A'+j) << " ";
//         cout << endl;
//     }
//     for(int i=2; i<=n; i++) {
//         for(int j=0; j<i; j++) cout << char('A'+j) << " ";
//         cout << endl;
//     }
// }
//////////////////////////
/*
A B C D E 
A B C D 
A B C 
A B 
A 
A B 
A B C 
A B C D 
A B C D E 
*/


///////////////////////////////////
//HALLOW DIAMOND OF STARS 
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) cout << " ";
//         cout << "*";
//         if(i>1) {
//             for(int j=1; j<=2*i-3; j++) cout << " ";
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i=n-1; i>=1; i--) {
//         for(int j=1; j<=n-i; j++) cout << " ";
//         cout << "*";
//         if(i>1) {
//             for(int j=1; j<=2*i-3; j++) cout << " ";
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
////////////////////////////////////
/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/


//////////////////////////////////
// Zig-Zag Pattern with Numbers

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 9;
//     for(int i=1; i<=3; i++) {
//         for(int j=1; j<=n; j++) {
//             if((i+j)%4==0 || (i==2 && j%4==0)) cout << j;
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }
/////////////////////////////////
/*
  3   7  
 2 4 6 8 
1   5   9
*/

//////////////////////////////////////
//Concentric Square Pattern
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     int size = 2*n-1;
//     for(int i=0; i<size; i++) {
//         for(int j=0; j<size; j++) {
//             int val = min(min(i,j), min(size-1-i, size-1-j));
//             cout << n-val << " ";
//         }
//         cout << endl;
//     }
// }
//////////////////////////////////////////
/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/

//////////////////////////////////////
// Pascal’s Triangle (Logical Combination)
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 6;
//     for(int i=0; i<n; i++) {
//         int val = 1;
//         for(int j=0; j<=i; j++) {
//             cout << val << " ";
//             val = val * (i - j) / (j + 1);
//         }
//         cout << endl;
//     }
// }
///////
/*

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 

*/

////////////////////////
//X PATTERN WITH ALPHABETS
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             if(j==i || j==n-i-1) cout << char('A'+i);
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }
///////////////////
/*

A   A
 B B 
  C  
 D D 
E   E

*/


/////////////////////////////////
//BUTTERFLY PATTERN
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) cout << "*";
        for(int j=1; j<=2*(n-i); j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";
        cout << endl;
    }
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) cout << "*";
        for(int j=1; j<=2*(n-i); j++) cout << " ";
        for(int j=1; j<=i; j++) cout << "*";
        cout << endl;
    }
}
//////////////////////////////////
/*


*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
*/
