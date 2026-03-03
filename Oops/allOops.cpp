// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     int age;
// public:
//     void setData(string n, int a) {
//         name = n; age = a;
//     }
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1;
//     s1.setData("Mohit", 20);
//     s1.display();
// }






///////////////////////////////////////////
// #include <iostream>
// using namespace std;

// class Demo {
// public:
//     Demo() { cout << "Constructor called\n"; }
//     ~Demo() { cout << "Destructor called\n"; }
// };

// int main() {
//     Demo d;  // Constructor executes
// } // Destructor executes automatically


///////////////////////////////////////////////

#include <iostream>
using namespace std;

class Base {
public:
    void greet() { cout << "Hello from Base\n"; }
};

class Derived : public Base {
public:
    void show() { cout << "Hello from Derived\n"; }
};

int main() {
    Derived d;
    d.greet();
    d.show();
}

