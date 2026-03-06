//////////SOME MORE FUNCTIONS//////////////

//CLEAR
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4};
//     v.clear(); // removes all elements

//     cout << "Size after clear: " << v.size();
// }



//DELETE
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     if(v.empty()) cout << "Vector is empty";
//     else cout << "Vector has elements";
// }



/////////////////////////////////////
//INSERT
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {10, 20, 40};
//     v.insert(v.begin() + 2, 30); // insert 30 at index 2

//     for(int x : v) cout << x << " ";
// }



////////////////////////////////
//ERASE
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    v.erase(v.begin() + 2); // removes element at index 2 (30)

    for(int x : v) cout << x << " ";
}

