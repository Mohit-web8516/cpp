#include<iostream>
using namespace std;
enum Day {sunday = 0 , monday = 1, tuesday = 2,wednesday = 3,thursday = 4, friday = 5, saturday = 6};
int main() {
    /*
    enums = a user-defined data type that consists of paired named -integer constants.
    great if you have a set of potential options
    
    */
    Day today = sunday;
   switch (today){
    case sunday: cout << "it is sunday!\n";
                    break;
    case monday: cout << "it is monday!\n";
                    break;
    case tuesday: cout << "it is tuesday!\n";
                    break;
    case wednesday: cout << "it is wednesday!\n";
                    break;
    case thursday: cout << "it is thursday!\n";
                    break;
    case friday: cout << "it is friday!\n";
                    break;
    case saturday: cout << "it is saturday!\n";
                    break;
   

    return 0;
}
}