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


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4,2,5,2,1,4};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int x : v) cout << x << " ";
}
