//vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3};
//     v.push_back(4);  
//     v.pop_back();     

//     cout << "Vector elements: ";
//     for(int x : v) cout << x << " ";
//     cout << "\nSize: " << v.size();
// }


//Pair

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p = {1, "john"};
    cout << p.first << " " << p.second;
}
