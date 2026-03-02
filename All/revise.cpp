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
#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction();
  return 0;
}



