/*
A struct is like a container that groups different variables together under one name.
Think of it as a way to make your own custom data type
*/



// #include <iostream>
// using namespace std;

// // Define a struct
// struct Student {
//     string name;   // variable for name
//     int age;       // variable for age
//     float grade;   // variable for grade
// };

// int main() {
//     // Create a Student variable
//     Student s1;

//     // Assign values
//     s1.name = "Alice";
//     s1.age = 20;
//     s1.grade = 8.5;

//     // Print values
//     cout << "Name: " << s1.name << endl;
//     cout << "Age: " << s1.age << endl;
//     cout << "Grade: " << s1.grade << endl;

//     return 0;
// }




/*
Pass by Value → The function gets a copy of the struct. Changes inside the function do not affect the original.

Pass by Reference → The function gets a reference (alias) to the struct. Changes inside the function do affect the original.


*/


/////PASS BY VALUE

#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

// Function takes struct by value (copy)
void printStudent(Student s) {
    cout << "Name: " << s.name << ", Age: " << s.age << ", Grade: " << s.grade << endl;
}

int main() {
    Student s1 = {"Alice", 20, 8.5};
    printStudent(s1);  // Passes a copy
    return 0;
}



///////////////////////////////////////////////
//PASS BY REFERENCE
// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int age;
//     float grade;
// };

// // Function takes struct by reference
// void updateGrade(Student &s, float newGrade) {
//     s.grade = newGrade;  // modifies the original
// }

// int main() {
//     Student s1 = {"Bob", 22, 7.5};
//     cout << "Before: " << s1.grade << endl;

//     updateGrade(s1, 9.0);  // Passes by reference

//     cout << "After: " << s1.grade << endl;
//     return 0;
// }












