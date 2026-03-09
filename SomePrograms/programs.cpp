//1. Reverse a String using Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     string str = "Mohan";
//     stack<char> st;
//     for(char c : str) st.push(c);

//     cout << "Reversed: ";
//     while(!st.empty()) {
//         cout << st.top();
//         st.pop();
//     }
// }


//2. Check Balanced Parentheses using Stack

// #include <iostream>
// #include <stack>
// using namespace std;

// bool isBalanced(string s) {
//     stack<char> st;
//     for(char c : s) {
//         if(c=='(' || c=='{' || c=='[') st.push(c);
//         else {
//             if(st.empty()) return false;
//             char top = st.top(); st.pop();
//             if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='['))
//                 return false;
//         }
//     }
//     return st.empty();
// }

// int main() {
//     string s = "{[()]}";
//     cout << (isBalanced(s) ? "Balanced" : "Not Balanced");
// }


//3. Frequency Count using Map

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     string str = "programming";
//     map<char,int> freq;
//     for(char c : str) freq[c]++;

//     for(auto &p : freq) cout << p.first << " -> " << p.second << "\n";
// }



//4. Find Duplicate Elements using Set

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,2,4,1};
//     set<int> s;
//     cout << "Duplicates: ";
//     for(int x : arr) {
//         if(s.count(x)) cout << x << " ";
//         else s.insert(x);
//     }
// }



///5. Sort and Remove Duplicates using Vector + Algorithm


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     vector<int> v = {4,2,5,2,1,4};
//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     for(int x : v) cout << x << " ";
// }


//6. Priority Queue (Top-K Largest Elements)

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     vector<int> nums = {10,4,7,20,15};
//     priority_queue<int> pq(nums.begin(), nums.end());

//     int k = 3;
//     cout << "Top " << k << " elements: ";
//     while(k-- && !pq.empty()) {
//         cout << pq.top() << " ";
//         pq.pop();
//     }
// }


//7. Binary Search using STL


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1,3,5,7,9};
//     int key = 5;
//     if(binary_search(v.begin(), v.end(), key))
//         cout << "Found " << key;
//     else
//         cout << "Not Found";
// }


//8..ROTATE ARRAY USING STL

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v = {1,2,3,4,5};
//     rotate(v.begin(), v.begin()+2, v.end()); // left rotate by 2

//     for(int x : v) cout << x << " ";
// }



//9..Next Permutation

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3};
    next_permutation(v.begin(), v.end());
    for(int x : v) cout << x << " ";
}

