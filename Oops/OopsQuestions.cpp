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

// #include <iostream>
// using namespace std;

// class A { public: void msgA(){ cout<<"Class A\n"; } };
// class B { public: void msgB(){ cout<<"Class B\n"; } };

// class C : public A, public B {
// public: void msgC(){ cout<<"Class C\n"; }
// };

// int main() {
//     C obj;
//     obj.msgA(); obj.msgB(); obj.msgC();
// }


//Function Overloading

// #include <iostream>
// using namespace std;

// class Math {
// public:
//     int add(int a, int b) { return a+b; }
//     double add(double a, double b) { return a+b; }
// };

// int main() {
//     Math m;
//     cout << m.add(5, 3) << endl;
//     cout << m.add(2.5, 3.7) << endl;
// }


///Virtual Function (runtime polymorphism)


// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void show() { cout << "Base class\n"; }
// };

// class Derived : public Base {
// public:
//     void show() override { cout << "Derived class\n"; }
// };

// int main() {
//     Base* ptr;
//     Derived d;
//     ptr = &d;
//     ptr->show(); // Calls Derived version
// }


//Encapsulation

// #include <iostream>
// using namespace std;

// class Account {
// private:
//     int balance;
// public:
//     void setBalance(int b) { balance = b; }
//     int getBalance() { return balance; }
// };

// int main() {
//     Account acc;
//     acc.setBalance(5000);
//     cout << "Balance: " << acc.getBalance();
// }


//Operator Overloading

// #include <iostream>
// using namespace std;

// class Complex {
//     int real, imag;
// public:
//     Complex(int r=0, int i=0) : real(r), imag(i) {}
//     Complex operator + (Complex const &obj) {
//         return Complex(real + obj.real, imag + obj.imag);
//     }
//     void display() { cout << real << " + " << imag << "i\n"; }
// };

// int main() {
//     Complex c1(3,4), c2(1,2);
//     Complex c3 = c1 + c2;
//     c3.display();
// }


//Abstract Class AND pure virtual function

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
    int r;
public:
    Circle(int radius) : r(radius) {}
    void area() override { cout << "Area: " << 3.14*r*r << endl; }
};

int main() {
    Shape* s = new Circle(5);
    s->area();
    delete s;
}


//file handling with oop
