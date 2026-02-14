//switch = a statement that allows us to choose between multiple options

// #include <iostream>
// using namespace std;
// int main(){
//     int day;
//     cout << "Enter a number between 1 and 7 : ";
//     cin >> day;
//     switch(day){
//         case 1:
//             cout << "Monday" << endl;
//             break;
//         case 2:
//             cout << "Tuesday" << endl;
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thursday" << endl;
//             break;
//         case 5:
//             cout << "Friday" << endl;
//             break;
//         case 6:
//             cout << "Saturday" << endl;
//             break;
//         case 7:
//             cout << "Sunday" << endl;
//             break;
//         default:
//             cout << "Invalid input!" << endl; 
//     }
// }


/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////
/////////////////////////////////////

#include <iostream>
using namespace std;
int main(){
    int month;
    cout << "Enter a number between 1 to 12 : ";
    cin >> month ;
    switch (month){
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "Febraury" << endl;
            break;
        case 3:
            cout << "March " << endl;
            break;
            case 4:
            cout << "April"<< endl;
            break;
            case 5:
            cout << "May" << endl;
            break;
            case 6:
            cout << "June" << endl;
            break;
            case 7:
            cout << "July" << endl;
            break;
            case 8:
            cout << "August" << endl;
            break;
            case 9:
            cout << "September" << endl;
            break;
            case 10:
            cout << "October" << endl;
            break;
            case 11:
            cout << "November" << endl;
            break;
            case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }
}