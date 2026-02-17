// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int* arr = new int[n];  // allocate array of size n

//     for (int i = 0; i < n; i++) {
//         arr[i] = i + 1;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;  // free memory for array
//     return 0;
// }


//////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
int main(){
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout << "address: " << pNum << '\n';
    cout << "value: " << *pNum << '\n';


    delete pNum;
    return 0;
}