// #include <iostream>
// using namespace std;

// int main() {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Hello, " << name << "!" << endl;
//     return 0;
// }


////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if (age >= 18) cout << "You are an adult.";
//     else cout << "You are a minor.";
//     return 0;
// }

////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i++) {
//         cout << "Iteration " << i << endl;
//     }
//     return 0;
// }


///////////////////////////
// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     cout << "Sum: " << add(5, 7);
//     return 0;
// }


///////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {10, 20, 30, 40, 50};
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 42;
//     int *ptr = &x;
//     cout << "Value: " << *ptr << ", Address: " << ptr;
//     return 0;
// }


///////////////////////////////
// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int age;
//     void display() {
//         cout << name << " is " << age << " years old.";
//     }
// };

// int main() {
//     Student s1;
//     s1.name = "john";
//     s1.age = 20;
//     s1.display();
//     return 0;
// }

////////////////////////////
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() { cout << "Animal makes sound\n"; }
// };

// class Dog : public Animal {
// public:
//     void sound() { cout << "Dog barks\n"; }
// };

// int main() {
//     Dog d;
//     d.sound();
//     return 0;
// }
/////////////////////////////////
////////////////////////////////
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream fout("test.txt");
//     fout << "Hello File!";
//     fout.close();

//     ifstream fin("test.txt");
//     string line;
//     getline(fin, line);
//     cout << line;
//     fin.close();
//     return 0;
// }

//////////////////////////////////
/////////////////////////////////
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3};
//     v.push_back(4);

//     for (int x : v) cout << x << " ";
//     return 0;
// }


/////////////////////////////////
// #include <iostream>
// using namespace std;

// void myFunction() {
//   cout << "I just got executed!";
// }

// int main() {
//   myFunction();
//   return 0;
// }

//////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int n, fact = 1;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     cout << "Factorial = " << fact << endl;
//     return 0;
// }
/////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     bool isPrime = true;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 1) isPrime = false;
//     else {
//         for(int i = 2; i <= n/2; i++) {
//             if(n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if(isPrime) cout << n << " is Prime" << endl;
//     else cout << n << " is Not Prime" << endl;

//     return 0;
// }


/////////////////////////////////

// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int age;

//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.name = "john";
//     s1.age = 20;
//     s1.display();

//     return 0;
// }



//////////////////////////
///////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements: ";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     // Reverse logic
//     for(int i = 0; i < n/2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }

//     cout << "Reversed Array: ";
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }


///////////////////////////////////
//////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a word: ";
//     cin >> str;

//     bool isPalindrome = true;
//     int n = str.length();

//     for(int i = 0; i < n/2; i++) {
//         if(str[i] != str[n-i-1]) {
//             isPalindrome = false;
//             break;
//         }
//     }

//     if(isPalindrome) cout << str << " is a Palindrome" << endl;
//     else cout << str << " is Not a Palindrome" << endl;

//     return 0;
// }


//////////////////////////////
/////////////////////////////

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key) {
//     int low = 0, high = n-1;
//     while(low <= high) {
//         int mid = (low + high) / 2;
//         if(arr[mid] == key) return mid;
//         else if(arr[mid] < key) low = mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }

// int main() {
//     int n, key;
//     cout << "Enter size of sorted array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements in sorted order: ";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     cout << "Enter element to search: ";
//     cin >> key;

//     int result = binarySearch(arr, n, key);
//     if(result != -1) cout << "Element found at index " << result << endl;
//     else cout << "Element not found" << endl;

//     return 0;
// }


///////////////////////////////////
//////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int r1, c1, r2, c2;
//     cout << "Enter rows and cols of first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and cols of second matrix: ";
//     cin >> r2 >> c2;

//     if(c1 != r2) {
//         cout << "Matrix multiplication not possible!" << endl;
//         return 0;
//     }

//     int A[r1][c1], B[r2][c2], C[r1][c2];

//     cout << "Enter first matrix: ";
//     for(int i = 0; i < r1; i++)
//         for(int j = 0; j < c1; j++)
//             cin >> A[i][j];

//     cout << "Enter second matrix: ";
//     for(int i = 0; i < r2; i++)
//         for(int j = 0; j < c2; j++)
//             cin >> B[i][j];

//     // Multiplication
//     for(int i = 0; i < r1; i++) {
//         for(int j = 0; j < c2; j++) {
//             C[i][j] = 0;
//             for(int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     cout << "Resultant Matrix: " << endl;
//     for(int i = 0; i < r1; i++) {
//         for(int j = 0; j < c2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

////////////////////////////
/////////////////////////////
// #include <iostream>
// using namespace std;

// int plusFuncInt(int x, int y) {
//   return x + y;
// }

// double plusFuncDouble(double x, double y) {
//   return x + y;
// }

// int main() {
//   int myNum1 = plusFuncInt(8, 5);
//   double myNum2 = plusFuncDouble(4.3, 6.26);
//   cout << "Int: " << myNum1 << "\n";
//   cout << "Double: " << myNum2;
//   return 0;
// }
////////////////////////////////
///////////////////////////////
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Array example
    int arr[] = {10, 20, 30, 40, 50};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Vector Example
    vector<int> list;
    
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    cout << "Vector elements: ";
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << " ";

    return 0;
}