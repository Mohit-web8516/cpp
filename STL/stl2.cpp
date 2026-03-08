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

// #include <iostream>
// #include <utility>
// using namespace std;

// int main() {
//     pair<int, string> p = {1, "john"};
//     cout << p.first << " " << p.second;
// }


//set



// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {5, 1, 2, 2, 3};
//     s.insert(4);

//     cout << "Set elements: ";
//     for(int x : s) cout << x << " ";
// }


//Maps

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> freq;
    string str = "raaammu";
    for(char c : str) freq[c]++;

    for(auto &p : freq)
        cout << p.first << " -> " << p.second << "\n";
}

