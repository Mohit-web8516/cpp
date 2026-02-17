//////////////////////////////////////////////
// #include <iostream>
// using namespace std;

// int max (int x, int y){
//     return (x > y) ? x : y;
// }
// double max (double x,double y){
//     return (x > y) ? x : y;
// }
// char max (char x, char y){
//     return (x > y) ? x : y;
// }

// int main(){
//     cout << max('1', '2') << '\n';

//     return 0;

// }

//////////////////////////////////////////////

/*
function template = describes what a function looks like.
can be used to generate as many overloaded functions as needed each using different data types

ex. "it's like a coookie-cutter....."
"Cookies are the same shape ,but the dough used can be different "

*/
#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << "Max of 3 and 7: " << myMax<int>(3, 7) << endl;
    cout << "Max of 3.5 and 7.5: " << myMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'g' and 'e': " << myMax<char>('g', 'e') << endl;
    return 0;
}
