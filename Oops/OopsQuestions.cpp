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

//SINGLE INHERITENCE

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void greet() { cout << "Hello from Base\n"; }
// };

// class Derived : public Base {
// public:
//     void show() { cout << "Hello from Derived\n"; }
// };

// int main() {
//     Derived d;
//     d.greet();
//     d.show();
// }

//Multiple Inheritence

#include <iostream>
using namespace std;

class A { public: void msgA(){ cout<<"Class A\n"; } };
class B { public: void msgB(){ cout<<"Class B\n"; } };

class C : public A, public B {
public: void msgC(){ cout<<"Class C\n"; }
};

int main() {
    C obj;
    obj.msgA(); obj.msgB(); obj.msgC();
}
