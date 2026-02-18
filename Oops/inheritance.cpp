//*inheritance = A class can receive attributes and methods from another class ,children classes inherit from a parent class 
// helps to reuse similar code found within multiple classes 


//Base class (parent): The class whose properties are inherited.

//Derived class (child): The class that inherits from the base class

//  */


///////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// // Base class
// class Animal {
// public:
//     void eat() {
//         cout << "This animal eats food." << endl;
//     }
// };

// // Derived class
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "The dog barks." << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();   // Inherited from Animal
//     d.bark();  // Defined in Dog
//     return 0;
// }




//////////////////////////////////////////////////


#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for area (to be overridden)
    virtual double area() {
        return 0;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() override {
        return length * width;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rect(10, 5);
    Circle circ(7);
    Triangle tri(6, 4);

    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Area of Circle: " << circ.area() << endl;
    cout << "Area of Triangle: " << tri.area() << endl;

    return 0;
}
