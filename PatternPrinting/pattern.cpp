// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // size
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// output
/*
*****
*****
*****
*****
*****
*/

//////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//output
/*

*
**
***
****
*****
*/

/////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for(int i=n; i>=1; i--) {
//         for(int j=1; j<=i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//output
/*

*****
****
***
**
*

*/


//////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n-i; j++) cout << " ";
//         for(int j=1; j<=i; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

//output
/*
    *
   **
  ***
 ****
*****

*/