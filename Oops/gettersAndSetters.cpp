/*
Abstraction = hiding unnecessary data from outside a class 
//getter = function that makes a private attribute READABLE

//setter = function that makes a private attribute WRITEABLE

*/

#include <iostream>
using namespace std;
class Stove{
    public:
     int temperature = 0 ;

};
int main(){

    Stove stove;
    stove.temperature = 1000000;
    cout << "the temperature setting is : " << stove.temperature;

    return 0;

}