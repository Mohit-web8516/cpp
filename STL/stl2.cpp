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

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<char, int> freq;
//     string str = "raaammu";
//     for(char c : str) freq[c]++;

//     for(auto &p : freq)
//         cout << p.first << " -> " << p.second << "\n";
// }


//Unordered Map

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<string, int> umap;
//     umap["apple"] = 3;
//     umap["banana"] = 5;

//     for(auto &p : umap)
//         cout << p.first << " -> " << p.second << "\n";
// }

//Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);

//     cout << "Top: " << st.top() << "\n";
//     st.pop();
//     cout << "New Top: " << st.top();
// }

// Queue

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front: " << q.front() << "\n";
    q.pop();
    cout << "New Front: " << q.front();
}
