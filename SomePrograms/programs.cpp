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

#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for(char c : s) {
        if(c=='(' || c=='{' || c=='[') st.push(c);
        else {
            if(st.empty()) return false;
            char top = st.top(); st.pop();
            if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='['))
                return false;
        }
    }
    return st.empty();
}

int main() {
    string s = "{[()]}";
    cout << (isBalanced(s) ? "Balanced" : "Not Balanced");
}
