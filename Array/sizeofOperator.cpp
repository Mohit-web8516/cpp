//sizeof() operator = determines the size in bytes of a : variable,data type , class ,objects ,etc.
// #include <iostream>
// using namespace std;
// int main(){
//     string name = "bro code ";
//     double gpa = 2.5;
//     char grade = 'F';
//     bool student = true;
//     char grades[] = {'A','B','C','D','F'};
//     cout << sizeof(grades) << " byte\n";
//     cout << sizeof (grades)/sizeof(char) << " elements\n";
//     return 0;
// }

///////////////////////////////////////////////////
//////////////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main(){
//     string names[] = {"Spongbob","Patrick","john","alex"};

//     for(int i = 0; i < 3; i++){
//         cout << names[i] << '\n';
//     }
//     return 0;
// }

///////////////////////////////////////////
//////////////////////////////////////////
// #include <iostream>
// using namespace std;
// int main(){
//     // string names[] = {"Spongbob","Patrick","john","alex"};
//     char grades[] = {'A','B','C','D','F'};

//     // for(int i = 0; i < sizeof(names)/sizeof(string); i++)
//     for(int i = 0; i < sizeof(grades)/sizeof(char); i++) {
//         cout << grades[i] << '\n';
//     }
//     return 0;
// }


////////////////////////////////////////////////
/////////////////////////////////////////////
//FOREACH LOOP = LOOP THAT EASES THE TRAVERSAL OVER AN ITERABLE DATA SET
// #include <iostream>
// using namespace std;
// int main(){
//     string names[] = {"Spongbob","Patrick","john","alex","robert"};

//     for(string name : names){
//         cout << name << '\n';
//     }
//     return 0;
// }


///////////////////////////////////////////////
///////////////////////////////////////////////
///////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// double getTotal(double prices[], int size);

// int main(){
//     double prices[] = {23.99,15.05,75,9.99};
//     int size = sizeof(prices)/sizeof(prices[0]);
//     double total = getTotal(prices, size);
     
//     cout << "$" << total;

//     return 0;

//     }
//     double getTotal(double prices[],int size){
//         double total = 0;

//         for(int i = 0; i < size ; i++){
//             total += prices[i];
//         }
//         return total;
//     }
