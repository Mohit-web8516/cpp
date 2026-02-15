//Variable scope = the visibility of a variable within a program. It determines where a variable can be accessed and modified.


//local variables = variables declared within a function or block, only accessible within that function or block.


//global variables = variables declared outside of any function or block, accessible throughout the entire program.

// #include <iostream>

// using namespace std;
// void printx();
// int main()
// {
//     int x = 10; //local variable
//     cout << x << endl;
//     printx(); 

//     return 0;
// }
// void printx(){
//     int x = 20;
//     cout << x << endl;
// } 

////////////////////////////////////////
#include <iostream>

using namespace std;
int x = 30; //global variable

void printx();

int main()
{
    int x = 10; 
    printx(); 
    cout << ::x << endl;

    return 0;
}
void printx(){
    int x = 20;
    cout << ::x << endl;
} 