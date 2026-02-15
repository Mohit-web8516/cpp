//Array is a collection of similar data items stored in contiguous memory locations. It is a data structure that can hold a fixed number of values of the same type. Each value in the array is called an element, and each element can be accessed using its index.

// #include <iostream>
// using namespace std;
// int main(){

//     int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array
//     cout << "Elements of the array : " << endl;
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << "  " << endl; // Accessing elements using index
//     }
//     cout << arr[2] << endl; // Accessing the third element (index 2)
//     cout << endl;
    
//     return 0;
// }



/////////////////////////////////////

//reverse a array but not in memory
// #include <iostream>
// using namespace std;
// int main(){

//     int arr[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of an array
//     cout << "Elements of the array : " << endl;
//     for (int i = 4; i >= 0; i--) {
//         cout << arr[i] << "  " << endl; // Accessing elements using index
//     }
//     cout << arr[2] << endl; // Accessing the third element (index 2)
//     cout << endl;
    
//     return 0;
// }


////////////////////////////////
// #include<iostream>
// using namespace std;
// int main (){
//     string cars[5];
    
//     cars[0] = "Volvo" ;
//     cars[1] = "BMW" ;
//     cars[2] = "Ford" ;
//     cars[3] = "Mazda";
//     cars[4] = "Audi";

//     cout << "The first car is : " << cars[0] << endl;
//     cout << "The second car is : " << cars[1] << endl;
//     cout << "The third car is : " << cars[2] << endl;
//     cout << "The fourth car is : " << cars[3] << endl;
//     cout << "The fifth car is : " << cars[4] << endl;
//     return 0;

// }

//////////////////////////////////////////////
#include <iostream>
using namespace std;
int main() {
    double prices[5] = {19.99, 29.99, 39.99, 49.99, 59.99}; // Declaration and initialization of an array
    cout << prices[0] << endl; // Accessing the first element
    cout << prices[1] << endl; // Accessing the second element
    cout << prices[2] << endl; // Accessing the third element
    cout << prices[3] << endl; // Accessing the fourth element
    cout << prices[4] << endl; // Accessing the fifth element
    return 0;
}