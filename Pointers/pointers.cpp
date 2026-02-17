//pointers = variables that stores memory address of another variable sometimes it's easier to work with an address 

//& address -of operator
// * dereference operator

#include <iostream>
using namespace std;
int main (){
    string name = "JOHN";
    int age = 21;
    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';

    return 0;
}