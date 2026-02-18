/*
constructor = special method that is automatically called when an object is instantiated useful for assigning values to attributes as arguments 

*/

#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    double gpa;

    Student(string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;

    }

};
int main(){


    Student student1("Spongebob", 25, 8.12);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    return 0;

}