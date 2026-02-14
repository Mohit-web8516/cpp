#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double s1,s2,hypotenuse;
    cout << "Enter the length of the first side: ";
    cin >> s1;
    cout << "Enter the length of second side: ";
    cin >> s2;
    hypotenuse = sqrt(pow(s1, 2) + pow (s2, 2));
    cout << "LENGTH OF HYPOTENUSE IS : " << hypotenuse;
    return 0;
}