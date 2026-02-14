//typedef = used to create an alias for another data type. It does 
// ////not create a new data type, but rather provides a new name 
// ////for an existing data type. This can be useful for improving //
// code readability and making it easier to understand the purpose //
// of a variable or data type.
#include<iostream>
#include <vector>

using namespace std;
// typedef string text_t;
// typedef int number;

using text_t = string;
using number = int;
int main (){
    text_t firstName = "Bro";
    number age = 21;

    cout << firstName << '\n';
    cout << age << '\n';

    return 0;

}