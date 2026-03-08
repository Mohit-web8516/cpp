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

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     cout << "Front: " << q.front() << "\n";
//     q.pop();
//     cout << "New Front: " << q.front();
// }

//Priority Queue (Heap)

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     priority_queue<int> pq; // max-heap
//     pq.push(10);
//     pq.push(5);
//     pq.push(20);

//     cout << "Top: " << pq.top(); // largest element
// }


//Algorithms

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {4, 2, 5, 1, 3};
//     sort(v.begin(), v.end()); // ascending

//     reverse(v.begin(), v.end()); // descending

//     cout << "Sorted & reversed: ";
//     for(int x : v) cout << x << " ";
// }

//////////////////////////////////////////
/////////////////////////////////////////////

//vector

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);

//     cout << "Front: " << v.front() << "\n";
//     cout << "Back: " << v.back() << "\n";
//     cout << "At(1): " << v.at(1) << "\n";

//     v.insert(v.begin()+1, 15); // insert at index 1
//     v.erase(v.begin()+2);      // erase element at index 2

//     cout << "Size: " << v.size() << " Capacity: " << v.capacity() << "\n";

//     for(int x : v) cout << x << " ";
//     v.clear();
//     cout << "\nAfter clear, size: " << v.size();
// }


//////////////////////////////////

//pair

// #include <iostream>
// #include <utility>
// using namespace std;

// int main() {
//     pair<int, string> p = make_pair(1, "John");
//     cout << p.first << " " << p.second << "\n";

//     pair<int, pair<int,string>> nested = {2, {22, "Data"}};
//     cout << nested.first << " " << nested.second.first << " " << nested.second.second;
// }

//////////////////////////////////////////
//set

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s;
//     s.insert(5);
//     s.insert(1);
//     s.insert(3);

//     cout << "Count(3): " << s.count(3) << "\n";
//     auto it = s.find(1);
//     if(it != s.end()) cout << "Found: " << *it << "\n";

//     s.erase(3);
//     for(int x : s) cout << x << " ";
//     cout << "\nSize: " << s.size();
//     s.clear();
//     cout << "\nAfter clear, size: " << s.size();
// }


////////////////////////////////////////////////


//Map

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<string,int> m;
//     m["apple"] = 3;
//     m.insert({"banana", 5});

//     cout << "Count(apple): " << m.count("apple") << "\n";
//     auto it = m.find("banana");
//     if(it != m.end()) cout << "Found: " << it->first << " -> " << it->second << "\n";

//     m.erase("apple");
//     for(auto &p : m) cout << p.first << " " << p.second << "\n";
//     cout << "Size: " << m.size();
//     m.clear();
//     cout << "\nAfter clear, size: " << m.size();
// }


///////////////////////////////////////////////
//Unordered Map

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     unordered_map<int,string> um;
//     um[1] = "one";
//     um[2] = "two";

//     cout << "Count(2): " << um.count(2) << "\n";
//     auto it = um.find(1);
//     if(it != um.end()) cout << "Found: " << it->first << " -> " << it->second << "\n";

//     um.erase(2);
//     for(auto &p : um) cout << p.first << " " << p.second << "\n";
// }

/////////////////////////////////////

//Stack
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);

//     cout << "Top: " << st.top() << "\n";
//     st.pop();
//     cout << "New Top: " << st.top() << "\n";
//     cout << "Size: " << st.size() << "\n";
//     cout << "Empty? " << st.empty();
// }


/////////////////////////////////////////

//Queue

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);

    cout << "Front: " << q.front() << " Back: " << q.back() << "\n";
    q.pop();
    cout << "New Front: " << q.front() << "\n";
    cout << "Size: " << q.size() << "\n";
    cout << "Empty? " << q.empty();
}
