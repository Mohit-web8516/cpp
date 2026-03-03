#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n; age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Mohit", 20);
    s1.display();
}
