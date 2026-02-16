//pass by Value vs Pass by REFERENCE
/*
Pass by Value → when you want to protect the original data and only need a copy.

Pass by Reference → when you want the function to modify the caller’s variable or avoid copying large objects (like vectors or strings).
*/
#include <iostream>
using namespace std;

int main() {
    string x = "ice-cream";
    string y = "water";
    string temp;

    swap(x , y);

    temp = x;
    x = y;
    y = temp;

    cout << "X : " << x << '\n';
    cout << "Y : " << y << '\n';
   


    return 0;
}
void swap(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}
