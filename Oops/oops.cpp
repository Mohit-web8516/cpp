//*object = A collection of attributes and methods 
// they can have characteristics and could perform actions can be used to mimic real world items(ex. phone, book, dog)
// created from a class which acts as a "blue-print"
// 
// */



// #include <iostream>
// using namespace std;
// class Human{
//     public:
//      string name;
//      string occupations;
//      int age;
    
//     void eat(){
//         cout << "this person is eating\n";
//     }
//     void drink (){
//         cout << " this person is drinking\n";

//     }
//     void sleep (){
//         cout << "this person is sleeping\n";
//     }
// };
// int main (){

//     Human human1;
//     Human human2;

//     human1.name = "John";
//     human1.occupations = "scientist";
//     human1.age = 70;


//     human2.name = "Robert";
//     human2.occupations = "student";
//     human2.age = 20;

//     cout << human1.name << '\n';
//     cout << human1.occupations << '\n';
//     cout << human1.age << '\n';

//     cout << human2.name << '\n';
//     cout << human2.occupations << '\n';
//     cout << human2.age << '\n';

//     human1.eat();
//     human1.drink();
//     human1.sleep();



//     human2.eat();
//     human2.drink();
//     human2.sleep();
//     return 0;
// }



///////////////////////////////////////////

#include <iostream>
using namespace std;

class Car {
    public:
      string make;
      string model;
      int year;
      string color;

      void accelerate(){
        cout << "You step on the gas!\n";
      }
      void brake(){
        cout << "You step on the brakes!\n";
      }
};
int main(){
    
    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';

     car1.accelerate();
     car1.brake();


    return 0;
}
