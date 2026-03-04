//CLASS AND OBJECT BASICS

// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     int age;
// public:
//     void setData(string n, int a) { name = n; age = a; }
//     void display() { cout << "Name: " << name << ", Age: " << age << endl; }
// };

// int main() {
//     Student s1;
//     s1.setData("john", 20);
//     s1.display();
// }


//CONSTRUCTOR AND DESTRUCTOR

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};

int main() {
    Demo d;  // Constructor executes
} // Destructor executes automatically
