//function = block of code that performs a specific task
// #include <iostream>
// using namespace std;
// //function declaration
// void happyBirthday(string name, int age){
//     cout << "Happy Birthday to you!" <<  name << endl;
//     cout << "Happy Birthday to you!" << name << endl;
//     cout << "Happy Birthday dear " << name << endl;
//     cout << "Happy Birthday to you!" <<  name << endl;
//     cout << "you are " << age << " years old!" << endl;
// }
// int main(){
//     //function call
//     string name = " John";
//     int age = 30;
//     happyBirthday(name, age);
//     return 0;
// }

////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// void add(int a, int b){
//     cout << "The sum is: " << a + b << endl;
// }
// int main(){
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     add(num1, num2);
//     return 0;
// }

/////////////////////////////////////////////
//return keyword is used to return a value from a function

// #include <iostream>
// using namespace std;
// double square(double length);
// int main(){
//     double length;
//     cout << "Enter the length of the square: ";
//     cin >> length;
//     double area = square(length);
//     cout << "The area of the square is: " << area << "cm^2" << endl;
//     return 0;
// }
// double square(double length){
//     return length * length;
// }

///////////////////////////////////////////////
// #include <iostream>
// #include <string>
// using namespace std;

// string greet(string name) {
//     return "Hello, " + name + " !";  // returns a string
// }

// int main() {
//     string message = greet("jozot");
//     cout << message << endl;
//     return 0;
// }

///////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// double square(double length);
// double cube(double length);
// int main(){
//     double length;
//     cout << "Enter the length of the square: ";
//     cin >> length;
//     double area = square(length);
//     cout << "The area of the square is: " << area << "cm^2" << endl;
//     double volume = cube(length);
//     cout << "The volume of the cube is: " << volume << "cm^3" << endl;
//     return 0;
// }
// double square(double length){
//     return length * length;
// }
// double cube(double length){
//     return length * length * length;
// }


////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// string concatenate(string str1, string str2);
// int main (){
//     string firstName, lastName;
//     cout << "Enter your first name: ";
//     cin >> firstName;
//     cout << "Enter your last name: ";
//     cin >> lastName;
//     string fullName = concatenate(firstName, lastName);
//     cout << "Your full name is: " << fullName << endl;
//     return 0;
// }
// string concatenate(string str1, string str2){
//     return str1 + " " + str2;
// }

//////////////////////////////////////////////////////
