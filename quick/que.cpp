//Add numbers from 1 → N.
// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter N: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         sum = sum + i;
//     }

//     cout << "Sum = " << sum;
// }


//check prime number

// #include <iostream>
// using namespace std;

// int main() {
//     int n, count = 0;

//     cout << "Enter number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0)
//             count++;
//     }

//     if(count == 2)
//         cout << "Prime Number";
//     else
//         cout << "Not Prime";
// }

#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=100; i++) {
        if(i % 2 != 0) {   
            cout << i << endl;
        }
    }
    return 0;
}
