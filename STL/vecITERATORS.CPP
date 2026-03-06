////////////////////////////////////////////////////
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30, 40, 50};
    
//     cout << "First element: " << *(vec.begin()) << endl;   // 10
//     cout << "Last element: " << *(vec.end() - 1) << endl;  // 50
    
//     return 0;
// }


////////////////////////////
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30, 40, 50};
    
//     vector<int> :: iterator it;

//     for (it = vec.begin(); it != vec.end(); it++){
//         cout << *(it) << " ";
//     } //forward loop

//     cout << endl;
//     return 0;
// }

 


/////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    
    vector<int> :: iterator it;

    for (auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";
    } //backward loop

    cout << endl;
    return 0;
}